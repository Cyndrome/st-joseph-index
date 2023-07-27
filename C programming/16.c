/*
Pattern printing
        1 
       1 1
      1 1 1
     1 1 1 1
    1 1 1 1 1
*/

#include <stdio.h>

int main()
{
    int row, col, n = 5;

    for (row = 1; row<=n; row++)
    {
        //printing spaces
        for(col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        //printing 1's
        for(col = 1; col <= row; col++)
        {
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}