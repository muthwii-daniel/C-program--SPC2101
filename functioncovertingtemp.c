/* 
c function  to  convert temp from fFahrenheit  to Celsius. 
*/

#include <stdio.h>

float convertToCelsius(float Fahrenheit) {
    return (Fahrenheit - 32) * 5 / 9;
}

int main() {
    float Fahrenheit, Celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    Celsius = convertToCelsius(Fahrenheit);
    printf("Temperature in Celsius: %.2f\n", Celsius);

    return 0;
}