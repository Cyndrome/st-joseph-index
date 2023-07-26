// A program to convert Celsius into Fahrenheit and vice versa

#include <stdio.h>
int main()
{
    float temp;
    printf("Please enter temperature: ");
    scanf("%f", &temp);

    int unit;
    printf("Is the temperature in Celsius or Fahrenheit? (1/2): ");
    scanf ("%d", &unit);

    float converted_temp;
    if (unit == 1) {
        converted_temp = (9.0/5.0 * temp) + 32.0;
        printf("In Fahrenheit, your entered temperature is %f", converted_temp); 
    }
    else if (unit == 2)
    {
        converted_temp = 5.0/9.0 * (temp - 32.0);
        printf("In Celsius, your entered temperature is %f", converted_temp); 
    }

    return 0;
}