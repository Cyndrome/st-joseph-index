#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter first number (a): ");
    scanf("%f", &a);
    printf("Enter second number (b): ");
    scanf("%f", &b);
    printf("Enter third number (c): ");
    scanf("%f", &c);

    if (a > b)
    {
        if(a > c)
        {
            printf("a is the largest number");
        }
        else
        {
            printf("c is the largest number");
        }
    }

    else
    {
        if (b > c)
        {
            printf("b is the largest number");
        }
        
        else
        {
            printf("c is the largest number");
        }
    }

    return 0;
}