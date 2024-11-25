/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:14:26 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/25 11:37:04 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// handle unsgined ints
int handle_unsigned(unsigned int num) 
{
    return ft_putnbr_unsigned(num);
}

// handle integers;
int handle_integers(int num)
{
    return ft_putnbr(num);
}


