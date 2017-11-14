#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes: ");
    int lenght = get_int();
    int x = lenght * 12;
    printf("Bottles: %i\n", x);
}