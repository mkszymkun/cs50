#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("ERROR\n");
        return 1;
    }

    string hpw = argv[1];

    for (int i = 65; i < 123; i++)
    {
        if (i == 91)
        {
            i = 97;
        }


        for (int j = 65; j < 123; j++)
        {

            if (j == 91)
            {
                j = 97;
            }


            for (int k = 65; k < 123; k++)

            {

                if (k == 91)
                {
                    k = 97;
                }

                for (int l = 65; l < 123; l++)
                {
                    if (l == 91)
                    {
                        l = 97;
                    }
                    char pw[5] = { i, j, k, l, '\0' };
                    string nhpw4 = crypt(pw, "50");
                    int comparison4 = (int) strcmp(hpw, nhpw4);
                    if (comparison4 == 0)
                    {
                        printf("OK 4\n");
                        printf("%s\n", pw);
                        return 0;
                    }
                }
            }
        }
    }

    for (int i = 65; i < 123; i++)
    {
        if (i == 91)
        {
            i = 97;
        }


        for (int j = 65; j < 123; j++)
        {

            if (j == 91)
            {
                j = 97;
            }


            for (int k = 65; k < 123; k++)

            {

                if (k == 91)
                {
                    k = 97;
                }
                char pw[4] = { i, j, k, '\0' };
                string nhpw3 = crypt(pw, "50");
                int comparison3 = (int) strcmp(hpw, nhpw3);
                if (comparison3 == 0)
                {
                    printf("OK 3\n");
                    printf("%s\n", pw);
                    return 0;
                }
            }
        }
    }
    for (int i = 65; i < 123; i++)
    {
        if (i == 91)
        {
            i = 97;
        }


        for (int j = 65; j < 123; j++)
        {

            if (j == 91)
            {
                j = 97;
            }

            char pw[3] = { i, j, '\0' };
            string nhpw2 = crypt(pw, "50");
            int comparison2 = (int) strcmp(hpw, nhpw2);
            if (comparison2 == 0)
            {
                printf("OK 2\n");
                printf("%s\n", pw);
                return 0;
            }
        }
    }

    for (int i = 65; i < 123; i++)
    {
        if (i == 91)
        {
            i = 97;
        }

        char pw[2] = { i, '\0' };
        string nhpw1 = crypt(pw, "50");
        int comparison1 = (int) strcmp(hpw, nhpw1);
        if (comparison1 == 0)
        {
            printf("OK 1\n");
            printf("%s\n", pw);
            return 0;
        }
    }

    printf("ERROR 2\n");
    return 1;
}
