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
        printf("EROR\n");
        return 1;
    }

    else
    {
    // 1
        for (int i = 0; i < 26; i++)
        {
            int u = i + 65;
            char array1[2] = { u, '\0' };
            string a = crypt(array1, "50");
            int stra = (int) strcmp(argv[1], a);
            if (stra == 0)
            {
                printf("%s\n", array1);
                return 0;
            }

            // 2
            for (int j = 0; j < 26; j++)
            {
                int u1 = j + 65;
                char array2[3] = { u, u1, '\0' };
                string b = crypt(array2, "50");
                int strb = (int) strcmp(argv[1], b);
                if (strb == 0)
                {
                    printf("%s\n", array2);
                    return 0;
                }

                //3
                for (int k = 0; k < 26; k++)
                {
                    int u2 = k + 65;
                    char array3[4] = { u, u1, u2, '\0' };
                    string c = crypt(array3, "50");
                    int strc = (int) strcmp(argv[1], c);
                    if (strc == 0)
                    {
                        printf("%s\n", array3);
                        return 0;
                    }

                    //4
                    for (int o = 0; o < 26; o++)
                    {
                        int u3 = o + 65;
                        char array4[5] = { u, u1, u2, u3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                    // 4
                    for (int o = 0; o < 26; o++)
                    {
                        int l3 = o + 97;
                        char array4[5] = { u, u1, u2, l3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                }

                // 3
                for (int k = 0; k < 26; k++)
                {
                    int l2 = k + 97;
                    char array3[4] = { u, u1, l2, '\0' };
                    string c = crypt(array3, "50");
                    int strc = (int) strcmp(argv[1], c);
                    if (strc == 0)
                    {
                        printf("%s\n", array3);
                        return 0;
                    }

                    //4
                    for (int o = 0; o < 26; o++)
                    {
                        int u3 = o + 65;
                        char array4[5] = { u, u1, l2, u3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                    // 4
                    for (int o = 0; o < 26; o++)
                    {
                        int l3 = o + 97;
                        char array4[5] = { u, u1, l2, l3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                }
            }
            // 2
            for (int j = 0; j < 26; j++)
            {
                int l1 = j + 97;
                char array2[3] = { u, l1, '\0' };
                string b = crypt(array2, "50");
                int strb = (int) strcmp(argv[1], b);
                if (strb == 0)
                {
                    printf("%s\n", array2);
                    return 0;
                }
                //3
                for (int k = 0; k < 26; k++)
                {
                    int u2 = k + 65;
                    char array3[4] = { u, l1, u2, '\0' };
                    string c = crypt(array3, "50");
                    int strc = (int) strcmp(argv[1], c);
                    if (strc == 0)
                    {
                        printf("%s\n", array3);
                        return 0;
                    }

                    //4
                    for (int o = 0; o < 26; o++)
                    {
                        int u3 = o + 65;
                        char array4[5] = { u, l1, u2, u3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                    // 4
                    for (int o = 0; o < 26; o++)
                    {
                        int l3 = o + 97;
                        char array4[5] = { u, l1, u2, l3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                }
                //3
                for (int k = 0; k < 26; k++)
                {
                    int l2 = k + 97;
                    char array3[4] = { u, l1, l2, '\0' };
                    string c = crypt(array3, "50");
                    int strc = (int) strcmp(argv[1], c);
                    if (strc == 0)
                    {
                        printf("%s\n", array3);
                        return 0;
                    }

                    //4
                    for (int o = 0; o < 26; o++)
                    {
                        int u3 = o + 65;
                        char array4[5] = { u, l1, l2, u3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                    // 4
                    for (int o = 0; o < 26; o++)
                    {
                        int l3 = o + 97;
                        char array4[5] = { u, l1, l2, l3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                }
            }
        }
        // 1
        for (int i = 0; i < 26; i++)
        {
            int l = i + 97;
            char array1[2] = { l, '\0' };
            string a = crypt(array1, "50");
            int stra = (int) strcmp(argv[1], a);
            if (stra == 0)
            {
                printf("%s\n", array1);
                return 0;
            }

            // 2
            for (int j = 0; j < 26; j++)
            {
                int u1 = j + 65;
                char array2[3] = { l, u1, '\0' };
                string b = crypt(array2, "50");
                int strb = (int) strcmp(argv[1], b);
                if (strb == 0)
                {
                    printf("%s\n", array2);
                    return 0;
                }

                //3
                for (int k = 0; k < 26; k++)
                {
                    int u2 = k + 65;
                    char array3[4] = { l, u1, u2, '\0' };
                    string c = crypt(array3, "50");
                    int strc = (int) strcmp(argv[1], c);
                    if (strc == 0)
                    {
                        printf("%s\n", array3);
                        return 0;
                    }

                    //4
                    for (int o = 0; o < 26; o++)
                    {
                        int u3 = o + 65;
                        char array4[5] = { l, u1, u2, u3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                    // 4
                    for (int o = 0; o < 26; o++)
                    {
                        int l3 = o + 97;
                        char array4[5] = { l, u1, u2, l3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                }

                // 3
                for (int k = 0; k < 26; k++)
                {
                    int l2 = k + 97;
                    char array3[4] = { l, u1, l2, '\0' };
                    string c = crypt(array3, "50");
                    int strc = (int) strcmp(argv[1], c);
                    if (strc == 0)
                    {
                        printf("%s\n", array3);
                        return 0;
                    }

                    //4
                    for (int o = 0; o < 26; o++)
                    {
                        int u3 = o + 65;
                        char array4[5] = { l, u1, l2, u3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                    // 4
                    for (int o = 0; o < 26; o++)
                    {
                        int l3 = o + 97;
                        char array4[5] = { l, u1, l2, l3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                }
            }
            // 2
            for (int j = 0; j < 26; j++)
            {
                int l1 = j + 97;
                char array2[3] = { l, l1, '\0' };
                string b = crypt(array2, "50");
                int strb = (int) strcmp(argv[1], b);
                if (strb == 0)
                {
                    printf("%s\n", array2);
                    return 0;
                }
                //3
                for (int k = 0; k < 26; k++)
                {
                    int u2 = k + 65;
                    char array3[4] = { l, l1, u2, '\0' };
                    string c = crypt(array3, "50");
                    int strc = (int) strcmp(argv[1], c);
                    if (strc == 0)
                    {
                        printf("%s\n", array3);
                        return 0;
                    }

                    //4
                    for (int o = 0; o < 26; o++)
                    {
                        int u3 = o + 65;
                        char array4[5] = { l, l1, u2, u3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                    // 4
                    for (int o = 0; o < 26; o++)
                    {
                        int l3 = o + 97;
                        char array4[5] = { l, l1, u2, l3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                }
                //3
                for (int k = 0; k < 26; k++)
                {
                    int l2 = k + 97;
                    char array3[4] = { l, l1, l2, '\0' };
                    string c = crypt(array3, "50");
                    int strc = (int) strcmp(argv[1], c);
                    if (strc == 0)
                    {
                        printf("%s\n", array3);
                        return 0;
                    }

                    //4
                    for (int o = 0; o < 26; o++)
                    {
                        int u3 = o + 65;
                        char array4[5] = { l, l1, l2, u3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                    // 4
                    for (int o = 0; o < 26; o++)
                    {
                        int l3 = o + 97;
                        char array4[5] = { l, l1, l2, l3, '\0' };
                        string d = crypt(array4, "50");
                        int strd = (int) strcmp(argv[1], d);
                        if (strd == 0)
                        {
                            printf("%s\n", array4);
                            return 0;
                        }
                    }
                }
            }
        }
    }
}
