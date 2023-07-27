// A program to find the GCD of two positive integers

#include <stdio.h>

int main()
{
    int a, b, i, x;
    printf("Please enter two integer values seperated by spaces: ");
    scanf ("%d %d", &a, &b);

    for (i=1; i<=a && i<=b; ++i)
    {
        if (a % i == 0 && b%i ==0)
        {
            x = i;
        }
    }
    printf("GCD of %d and %d is %d", a, b, x);
}