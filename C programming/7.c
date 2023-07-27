// A program to find largest number among 10 numbers

#include <stdio.h>

int main()
{
    //Storing the numbers inside an array
    int a[10], large = 0, i;
    
    // Using loop to take input 10 times
    for(i=0; i<10; i++)
    {
        int remaining = 10 - i;
        printf ("Enter a number (%d left): ", remaining);
        scanf ("%d", &a[i]);
    }

    // Condition for being largest number
    for(i=0; i<10; i++)
    {
        if(a[i] > large)
        {
            large = a[i];
        }
    }

    printf("\nLargest number: %d", large);
    return 0;
}