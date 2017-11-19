#include <stdio.h>
#include <cs50.h>
#include <math.h>

long long int ten_to_power(int x);

int main(void)
{
    printf("Number: ");
    long long int cc = get_long_long();
    int dgts = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum = 0;


    if (cc < ten_to_power(13) && cc > ten_to_power(12) - 1)
    {
        dgts = 13;
    }

    else if (cc < ten_to_power(15) && cc > ten_to_power(14) - 1)
    {
        dgts = 15;
    }

    else if (cc < ten_to_power(116) && cc > ten_to_power(15) - 1)
    {
        dgts = 16;
    }

    if (dgts != 13 && dgts != 15 && dgts != 16)
    {
        printf("INVALID\n");
    }

    else
    {
        for(int i = 1; i <= dgts; i = i + 2)
        {
            long long int high = ten_to_power(i + 1);
            long long int low = ten_to_power(i);

            int digit = (cc % high - cc % low) / low;
            int doub = 2 * digit;
            if (doub > 9)
            {
                sum1 = sum1 + 1 + doub % 10;
            }
            else
            {
                sum1 = sum1 + doub;
            }
        }

        for(int i = 0; i <= dgts; i = i + 2)
        {
            long long int high = ten_to_power(i + 1);
            long long int low = ten_to_power(i);

            int digit = (cc % high - cc % low) / low;
            sum2 = sum2 + digit;
        }

        sum = sum1 + sum2;

        if (sum % 10 != 0)
        {
            printf("INVALID\n");
        }

        else
        {
            if (dgts == 13)
            {
                long long int low13 = ten_to_power(12);
                int dgt1 = (cc - cc % low13) / low13;
                if (dgt1 == 4)
                {
                    printf("VISA\n");

                }
            }

            else if (dgts == 15)
            {
                long long int low15 = ten_to_power(14);
                long long int low14 = ten_to_power(13);
                int dgt1 = (cc - cc % low15) / low15;
                int dgt2 = (cc % low15 - cc % low14) / low14;
                if (dgt1 == 3 && (dgt2 == 4 || dgt2 == 7))
                {
                    printf("AMEX\n");

                }
            }

            else if (dgts == 16)
            {
                long long int low16 = ten_to_power(15);
                long long int low15 = ten_to_power(14);
                int dgt1 = (cc - cc % low16) / low16;
                int dgt2 = (cc % low16 - cc % low15) / low15;
                if (dgt1 == 5 && (dgt2 == 1 || dgt2 == 2 || dgt2 == 3 || dgt2 == 4 || dgt2 == 5))
                {
                    printf("MASTERCARD\n");

                }
                else if (dgt1 == 4)
                {
                    printf("VISA\n");
                }
            }

            else
            {
                printf("INVALID\n");
            }
        }

    }

}


long long int ten_to_power(int x)
{
    long long int y = pow(10, x);
    return y;
}