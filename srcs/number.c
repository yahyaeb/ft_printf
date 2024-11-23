/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:44:24 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/23 17:30:20 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr(int n)
{
	int	i;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= 0 && n <= 9)
	{
		i = n + '0';
		write(1, &i, 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void    ft_putnbr_hex_lower(unsigned int num)
{
    char    *hex_base = "0123456789abcdef";

    if (num >= 16)
        ft_putnbr_hex_lower(num / 16);
    write(1, &hex_base[num % 16], 1);
}

void ft_putnbr_hex_upper(unsigned int num)
{
    char *hex_base = "0123456789ABCDEF";
    if (num >= 16)
        ft_putnbr_hex_upper(num / 16);
    write(1, &hex_base[num % 16], 1);
}

void	ft_putnbr_unsigned(unsigned int n)
{
	char	i;

	if (n <= 9)
	{
		i = n + '0';
		write(1, &i, 1);
	}
    else
	{
		ft_putnbr_unsigned(n / 10);
		ft_putnbr_unsigned(n % 10);
	}
}

void ft_print_pointer(void *ptr)
{
    if (!ptr)
    {
        write(1, "0x0", 3); // Handle NULL pointers as "0x0"
        return;
    }
    write(1, "0x", 2); // Prefix for pointer
    ft_putnbr_hex_lower((uintptr_t)ptr); // Cast pointer to uintptr_t and print in hex
}



