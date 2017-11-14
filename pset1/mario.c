#include <cs50.h>
#include <stdio.h>

void space(int s);
void hash(int hs);

int main(void)
{
    int h;
    do
    {
    printf("Height: ");
    h = get_int();
    }
    while (h < 0 || h > 23);

    int s = h - 1;
    int hs = 1;
    for (int i = 1; i <= h; i++)
    {
        space(s);
        hash(hs);
        printf("  ");
        hash(hs);
        space(s);
        printf("\n");
        s--;
        hs++;
    }
}

void space(int s)
{
    for (int i = 0; i < s; i++)
    {
        printf(" ");
    }
}

void hash(int hs)
{
    for (int i = 1; i <= hs; i++)
    {
        printf("#");
    }
}