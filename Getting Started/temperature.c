/*Temperature of a city in farheneit degrees is input through the keyboard.Write a program to convert this temperature into centigrade degrees.*/

#include <stdio.h>
int main(){
    float fahrenheitTemp, celsiusTemp;
    printf("Enter the temperature of the city in Fahrenheit : ");
    scanf("%f",&fahrenheitTemp);
    celsiusTemp = 5 * (fahrenheitTemp - 32) / 9;
    printf("The temperature of the city in Celsius is %.2f", celsiusTemp);
    return 0;
}