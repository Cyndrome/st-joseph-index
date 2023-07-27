#include <stdio.h>

int main()
{
    int i, num[10], pos = 0, neg = 0;
    for (i=0; i<10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
        if (num[i] >= 0)
        {
            pos = pos + 1;
        }
        else
        {
            neg = neg + 1;
        }
    }

    printf("\nTotal positive numbers: %d", pos);
    printf("\nTotal negative numbers: %d", neg);

    return 0;
}