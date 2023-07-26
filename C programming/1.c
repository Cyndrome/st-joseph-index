// A simple program to find the sum and average of three numbers 

#include <stdio.h>

void main()
{
    float a, b, c, sum, avg;  
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Enter third number: ");
    scanf("%f", &c);

    sum = a + b + c;
    avg = sum/3; 

    printf("\nSum = %f", sum);
    printf("\nAverage = %f", avg);
}