#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // gets a string from a user
    string n = get_string();

    printf("%c", toupper(n[0]));

    for (int i = 0, l = strlen(n); i < l; i++)
    {
        if ((char) n[i] == ' ')
        {
            // prints and capitalizes i'th character in the string
            printf("%c", toupper(n[i+1]));
            i++;
        }
    }
    printf("\n");
}