#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Number: ");
    long long int cc = get_long_long();
    long long d12 = pow(10, 12);
    long long d13s = 999999999999;
    long long d13 = pow(10, 13);
    long long d14 = pow(10, 14);
    long long d15s = 99999999999999;
    long long d15 = pow(10, 15);
    long long d16s = 999999999999999;
    long long d16 = pow(10, 16);
    int dgts = 0;

    if (cc < d16 && cc > d16s)
    {
        dgts = 16;
    }
    else if (cc < d15 && cc > d15s)
    {
        dgts = 15;
    }
    else if (cc < d13 && cc > d13s)
    {
        dgts = 13;
    }


    if (dgts !=13 && dgts != 15 && dgts != 16)
    {
        printf("INVALID\n");
    }
    else
    {
        long long int c0 = 0;
        int sum = 0;
        int sum2 = 0;
        for (int i = 2; i <= dgts; i = i + 2)
        {
            long long int x = pow(10, i);
            long long int y = pow(10, i - 1);
            long long int c = (cc % x - c0) / y;
            int d = 2 * c;
            if (d < 10)
            {
                sum2 = sum2 + d;
            }
            else
            {
                sum2 = sum2 +1 + d % 10;
            }
            c0 = c;
        }
        c0 = 0;
        for (int i = 1; i <= dgts; i = i + 2)
        {
            long long int x = pow(10, i);
            long long int y = pow(10, i - 1);
            long long int c = (cc % x - c0) / y;
            sum = sum + c;
            c0 = c;
        }
        int sumt = sum + sum2;

        if (sumt % 10 != 0)
        {
            printf("INVALID\n");
        }
        else
        {


            if (dgts == 15 && ((cc - (cc % d13)) / d13  == 34 || (cc - (cc % d13)) / d13 == 37))
            {
                printf("AMEX\n");
            }
            else if (dgts == 16 && ((cc - (cc % d14)) / d14  == 51 || (cc - (cc % d14)) / d14 == 52 || (cc - (cc % d14)) / d14 == 53 || (cc - (cc % d14)) / d14 == 54 || (cc - (cc % d14)) / d14 == 55))
            {
                printf("MASTERCARD\n");
            }
            else if (dgts == 13 && ((cc - (cc % d12)) / d12  == 4))
            {
                printf("VISA\n");
            }
            else if (dgts == 16 && ((cc - (cc % d15)) / d15  == 4))
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
    }
}

