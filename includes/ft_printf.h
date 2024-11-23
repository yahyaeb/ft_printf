/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:45:43 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/23 17:48:36 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRINTF_H
# define PRINTF_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

void	ft_putnbr(int n);
int ft_printf(const char *format, ...);
void	ft_putnbr_unsigned(unsigned int n);
void ft_print_pointer(void *ptr);
void ft_putnbr_hex_upper(unsigned int num);
void    ft_putnbr_hex_lower(unsigned int num);
void	ft_putstr(char *s);
void	ft_putchar(char c);
#endif