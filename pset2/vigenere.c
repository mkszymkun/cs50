#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    int g = 0;
    if (argc != 2)
    {
        printf("ERROR\n");
        return 1;
    }

    else
    {
        for (int h = 0; h < strlen(argv[1]); h++)
        {
            if (g == 0)
            {
                if (isalpha(argv[1][h]) == false)
                {
                    printf("ERROR\n");
                    return 1;
                }
            }

        }

        printf("plaintext:  ");
        string p = get_string();
        printf("ciphertext: ");
        int a;
        int b;
        int c;
        int lk = strlen(argv[1]);
        int j = 0;
        int k;

        // iterates trough chars in string
        for (int i = 0, l = strlen(p); i < l; i++)
        {

            // iterates through the key
            if (j == lk)
            {
                j = 0;
            }

            if isalpha(argv[1][j])
            {
                if isupper(argv[1][j])
                {
                    k = (int) argv[1][j] - 65;
                    if (isupper(p[i]) || islower(p[i]))
                    {
                        j++;
                    }

                }
                else
                {
                    k = (int) argv[1][j] - 97;
                    if (isupper(p[i]) || islower(p[i]))
                    {
                        j++;
                    }
                }
            }
            else
            {
                j++;
            }



            // prints cyphered uppers
            if ((int) p[i] > 64 && (int) p[i] < 91)
            {
                a = (int) p[i] - 65;
                b = (a + k) % 26;
                c = b + 65;
                printf("%c", (char) c);
            }

            // prints cyphered lowers
            else if ((int) p[i] > 96 && (int) p[i] < 123)
            {
                a = (int) p[i] - 97;
                b = (a + k) % 26;
                c = b + 97;
                printf("%c", (char) c);
            }

            // prints other characters unchanged
            else
            {
                printf("%c", p[i]);
            }
        }

        printf("\n");
        return 0;
    }
}