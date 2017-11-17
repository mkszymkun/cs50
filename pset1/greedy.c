#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    float c = get_float();

    while (c < 0)
    {
        printf("How much change is owed?\n");
        c = get_float();
    }

    int ch = roundf(c * 100);

    int q = ch / 25;
    int d = ch % 25 / 10;
    int n = ch % 25 % 10 / 5;
    int p = ch % 25 % 10 % 5 / 1;

    printf("%i\n", q + d + n + p);
}
