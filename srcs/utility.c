/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:43:03 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/24 22:54:51 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t  ft_strlen(char *str)
{
        size_t     i;  

        i = 0;
        while (str[i])
        {   
                i++;
        }   
        return (i);
}
//int array length
int ft_intlen(int n)
{
    int i = 0;

    if (n == 0)
        return 1;
    if (n < 0)
    {
        n = -n;
        i++;
    }
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return i;
}

//unsigned in length
int ft_unsigned_len(unsigned int n)
{
    int len = 0;
    if (n == 0)
        return 1;
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return len;
}