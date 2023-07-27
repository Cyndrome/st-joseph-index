/*
Pattern printing
        *     
       * *    
      * * *   
     * * * *  
    * * * * * 
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
        //printing *'s
        for(col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}