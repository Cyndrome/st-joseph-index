/*
    Pattern printing
    1
    1 2
    1 2 3
    1 2 3 4 
    1 2 3 4 5

    Watch this for explanation: https://youtu.be/irzvR4VEt4M
*/

#include <stdio.h>

int main()
{
    int n = 5, row, col;
    for (row = 1; row<=n; row++)
    {
        for (col = 1; col<=row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}