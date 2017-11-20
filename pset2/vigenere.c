#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("ERROR\n");
        return 1;
    }

    string key = argv[1];
    int kl = strlen(argv[1]);

    for (int l = 0; l < kl; l++)
    {
        if ((int) isalpha(key[l]) == 0)
        {
            printf("ERROR\n");
            return 1;
        }
    }

    printf("plaintext:  ");
    string plain = get_string();
    int l = strlen(plain);
    int k;


    printf("ciphertext: ");

    for (int i = 0, j = 0; i < l; i++, j++)
    {
        if (j == kl)
        {
            j = 0;
        }


        if ((int) plain[i] > 64 && (int) plain[i] < 91)
        {
            if ((int) key[j] > 64 && (int) key[j] < 91)
            {
                k = (int) key[j] - 65;
            }

            else
            {
                k = (int) key[j] - 97;
            }

            int c = (((int) plain[i] - 65) + k) % 26;
            plain[i] = c + 65;
        }

        else if ((int) plain[i] > 96 && (int) plain[i] < 123)
        {
            if ((int) key[j] > 64 && (int) key[j] < 91)
            {
                k = (int) key[j] - 65;
            }

            else
            {
                k = (int) key[j] - 97;
            }
            int c = (((int) plain[i] - 97) + k) % 26;
            plain[i] = c + 97;
        }

        else
        {
            j--;
        }
    }

    printf("%s\n", plain);
    return 0;
}
