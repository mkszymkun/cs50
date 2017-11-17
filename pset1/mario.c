#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("Height: ");
        n = get_int();
    }
    while (n < 0 || n > 23);

    for (int i = 0; i < n; i++)
    {
        int h = 0;
        int s = 0;
        int k = n - i - 1;

        while(s < k)
        {
            printf(" ");
            s++;
        }

        while(h < i + 1)
        {
            printf("#");
            h++;
        }

        printf("  ");
        h = 0;
        while(h < i + 1)
        {
            printf("#");
            h++;
        }
        printf("\n");
    }
}
