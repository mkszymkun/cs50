#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    float x = get_float();
    int y = x * 100;
    int q = y / 25;
    int d = y % 25 / 10;
    int n = y % 25 % 10 / 5;
    int p = y % 25 % 10 % 5 / 1;
    printf("%i %i %i %i\n", q, d, n, p);
}