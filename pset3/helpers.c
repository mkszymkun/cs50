/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <math.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{

    int right = n - 1;
    int left = 0;

    for (int i = left; i <= right; i++)
    {
        int middle = n / 2 + left;

        if (values[middle] == value)
        {
            return true;
        }

        else if (values[middle] > value)
        {
            right = middle - 1;
            i--;
        }

        else if (values[middle] < value)
        {
            left = middle;
            i--;
        }

        n = n - middle;
    }

    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int tvalues[65536];

    for (int i = 0; i < n; i++)
    {
        tvalues[values[i]]++;
    }

    for (int j = 0, l = 0; j <= n; j++)
    {
        if (tvalues[j] != '\0')
        {
            for (int k = 0; k < tvalues[j]; k++)
            {
                values[l] = j;
                l++;
            }
        }
    }
}
