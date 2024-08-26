#include <unistd.h>

void write_digit(int nb)
{
    char c;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb >= 10)
    {
        write_digit(nb / 10);
        write_digit(nb % 10);
    }
    else
    {
        c = nb + '0';
        write(1, &c, 1);
    }
}
void plus_a_b(int a, int b)
{
    write_digit(a + b);
}

void minus_a_b(int a, int b)
{
    write_digit(a - b);
}

void times_a_b(int a, int b)
{
    write_digit(a * b);
}