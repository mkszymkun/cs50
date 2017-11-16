#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string n = get_string();

    if (n[0] != ' ')
    {
        printf("%c", toupper(n[0]));
    }

    for (int i = 0, l = strlen(n); i < l; i++)
    {
        if (n[i - 1] == ' ')
        {
            if (n[i] != ' ')
            {
                printf("%c", toupper(n[i]));
            }
        }
    }
    printf("\n");
}