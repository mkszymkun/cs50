#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("INVALID NUMBER OF ARGUMENTS\n");
        return 1;
    }
    else
    {
        printf("plaintext:  ");
        string p = get_string();
        printf("ciphertext: ");
        int k = atoi(argv[1]);
        int a;
        int b;
        int c;

        for (int i = 0, l = strlen(p); i < l; i++)
        {

            if ((int) p[i] > 64 && (int) p[i] < 91)
            {
                a = (int) p[i] - 65;
                b = (a + k) % 26;
                c = b + 65;
                printf("%c", (char) c);
            }

            else if ((int) p[i] > 96 && (int) p[i] < 123)
            {
                a = (int) p[i] - 97;
                b = (a + k) % 26;
                c = b + 97;
                printf("%c", (char) c);
            }

            else
            {
                printf("%c", p[i]);
            }
        }

        printf("\n");
        return 0;
    }
}