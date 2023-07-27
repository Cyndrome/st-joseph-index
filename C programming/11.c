//A simple program to find the area and perimeter of a triangle

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, P, Area;
    printf("Enter the sides of the triangle (seperated by spaces): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    P = a + b + c;
    s = P/2;
    Area = sqrt(s * (s-a) * (s-b) * (s-c));
    printf("Perimeter of the triangle = %lf", P);
    printf("\nArea of the traingle = %lf", Area);

    return 0;
}