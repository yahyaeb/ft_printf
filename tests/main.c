#include "../includes/ft_printf.h"

int main (void)
{
    printf("this is the real printf: %u\n", (unsigned int)-429496729225);
    ft_printf("This my set to ft_print is: %u \n", (unsigned int)-429496729225);
    return 0;
}