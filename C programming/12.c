// A program to to check whether a year is a leap year using all possible conditions

#include <stdio.h>

int main()
{
    int year;
    printf ("Enter the year (4 digit) to check: ");
    scanf("%d", &year);
    /*
        If the year ends is divisible by 100, it will only be a leap year if it's divisible by 400 too.
        Otherwise, we just need to check if it's divisible by 4
    */
    if(year%400==0 || (year%100!=0 && year%4==0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}