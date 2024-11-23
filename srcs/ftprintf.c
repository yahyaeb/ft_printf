/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:43:03 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/23 17:53:16 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

//allowed functions; malloc, free, write, 
//va_start, 
//va_arg,
// va_copy,
// va_end.


int ft_printf(const char *format, ...)
{
    va_list args;
    const char *ptr;
    int count;
    char *s;
    
    count = 0;
    va_start(args, format);
    ptr = format;
    while(*ptr)
    {
        if(*ptr == '%' && *(ptr + 1) == 'u')
        {
            ft_putnbr_unsigned(va_arg(args, int));
            ptr+=2;
            count++;
        }
        else if(*ptr == '%' && (*(ptr + 1) == 'i' || *(ptr + 1) == 'd'))
        {
            ft_putnbr(va_arg(args, int));
            ptr+=2;
            count++;
        }
        else if (*ptr == '%' && *(ptr + 1) == 's')
        {
            s = (va_arg(args, char*));
            if(!s)
                ft_putstr("(null)");
            else
                ft_putstr(s);
            ptr+=2;
            count++;   
        }
        else if (*ptr == '%' && *(ptr + 1) == 'c')
        {
            ft_putchar((char)va_arg(args, int));
            ptr+=2;
            count++;   
        }
        else if (*ptr == '%' && *(ptr + 1) == 'p') // The `void *` pointer argument is printed in hexadecimal format.
        {
            ft_print_pointer((va_arg(args, void *)));
            ptr+=2;
            count++;   
        }
        else if (*ptr == '%' && *(ptr + 1) == 'x') // hexadecimal (base 16) lowercase format.
        {
            ft_putnbr_hex_lower((unsigned int)va_arg(args, unsigned int));
            ptr+=2;
            count++;
        }
        else if (*ptr == '%' && *(ptr + 1) == 'X') // The `X` pointer argument is printed in hexadecimal format.
        {
            ft_putnbr_hex_upper((unsigned int)(va_arg(args, unsigned int)));
            ptr+=2;
            count++;   
        }
        else
        {
            write(1, ptr, 1);
            count++;
            ptr++;
        }
        
    }
    va_end(args);
    return count;
}


