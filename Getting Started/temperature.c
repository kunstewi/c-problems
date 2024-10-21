#include <stdio.h>
int main(){
    float fahrenheitTemp, celsiusTemp;
    printf("Enter the temperature of the city in Fahrenheit : ");
    scanf("%f",&fahrenheitTemp);
    celsiusTemp = 5 * (fahrenheitTemp - 32) / 9;
    printf("The temperature of the city in Celsius is %.2f", celsiusTemp);
    return 0;
}