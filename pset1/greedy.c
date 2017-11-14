#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("O hai! ");
    float x;
    do
    {
        printf("How much change is owed?\n");
        x = get_float();
    }
    while (x < 0);

    float c = roundf(x * 100);
    int y = c;
    int q = y / 25;
    int d = y % 25 / 10;
    int n = y % 25 % 10 / 5;
    int p = y % 25 % 10 % 5 / 1;
    printf("%i\n", q + d + n + p);
}
