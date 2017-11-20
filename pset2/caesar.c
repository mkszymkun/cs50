#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("ERROR\n");
        return 1;
    }

    int k = atoi(argv[1]);

    printf("plaintext:  ");
    string plain = get_string();
    int l = strlen(plain);


    printf("ciphertext: ");

    for (int i = 0; i < l; i++)
    {
        if ((int) plain[i] > 64 && (int) plain[i] < 91)
        {
            int c = (((int) plain[i] - 65) + k) % 26;
            plain[i] = c + 65;
        }

        else if ((int) plain[i] > 96 && (int) plain[i] < 123)
        {
            int c = (((int) plain[i] - 97) + k) % 26;
            plain[i] = c + 97;
        }
    }

    printf("%s\n", plain);
    return 0;
}
