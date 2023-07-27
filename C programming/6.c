// A program by using C to find the summation of 1*2 + 2 * 3 + 3*4 + .... + N*(N+1)

#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        sum += i * (i + 1); //compare with n*(n+1)
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}
