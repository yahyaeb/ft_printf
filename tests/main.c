#include "../includes/ft_printf.h"
#include <stdlib.h>
#include <string.h>

void print_box(const char *title)
{
    int len = 30; // Adjust length for the box
    printf("\n");
    for (int i = 0; i < len; i++) printf("*"); // Top border
    printf("\n* %s", title);
    for (int i = 0; i < len - (int)strlen(title) - 2; i++) printf(" "); // Adjust spacing
    printf("*\n");
    for (int i = 0; i < len; i++) printf("*"); // Bottom border
    printf("\n");
}

int main(void)
{
    // %p tests
    print_box("\"%p tests\"");
    int num = 42;
    int *int_ptr = &num;
    printf("Real printf: %p\n", int_ptr);
    ft_printf("ft_printf: %p\n", int_ptr);

    void *null_ptr = NULL;
    printf("Real printf: %p\n", null_ptr);
    ft_printf("ft_printf: %p\n", null_ptr);

    // %s tests
    print_box("\"%s tests\"");
    char *str = "Hello, 42!";
    printf("Real printf: %s\n", str);
    ft_printf("ft_printf: %s\n", str);

    char *null_str = NULL;
    printf("Real printf: %s\n", null_str);
    ft_printf("ft_printf: %s\n", null_str);

    // %c tests
    print_box("\"%c tests\"");
    printf("Real printf: %c\n", 'A');
    ft_printf("ft_printf: %c\n", 'A');

    // %i tests
    print_box("\"%i tests\"");
    printf("Real printf: %i\n", 42);
    ft_printf("ft_printf: %i\n", 42);

    printf("Real printf: %i\n", -42);
    ft_printf("ft_printf: %i\n", -42);

    // %u tests
    print_box("\"%u tests\"");
    printf("Real printf: %ld\n", 4294967295); // Max unsigned int
    ft_printf("ft_printf: %u\n", 4294967295);

    // %d tests
    print_box("\"%d tests\"");
    printf("Real printf: %d\n", 42);
    ft_printf("ft_printf: %d\n", 42);

    printf("Real printf: %ld\n", -2147483648); // Min int
    ft_printf("ft_printf: %d\n", -2147483648);

    // %x tests
    print_box("\"%x tests\"");
    printf("Real printf: %x\n", 255);
    ft_printf("ft_printf: %x\n", 255);

    printf("Real printf: %lx\n", 4294967295); // Max unsigned int
    ft_printf("ft_printf: %x\n", 4294967295);

    // %X tests
    print_box("\"%X tests\"");
    printf("Real printf: %X\n", 255);
    ft_printf("ft_printf: %X\n", 255);

    printf("Real printf: %lX\n", 4294967295); // Max unsigned int
    ft_printf("ft_printf: %X\n", 4294967295);

    return 0;
}
