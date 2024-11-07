/* Unit conversion c program.*/

#include <stdio.h>
int main(){
    float km, m, cm, feet, inches;
    printf("\nEnter the distance in kilometers:");
    scanf("%f", &km);
    m = km*1000;
    cm = m*100;
    inches = cm/2.54;
    feet = inches/12;
    printf("Distance in meters: %.3f\n",m);
    printf("Distance in centimeters: %.3f\n",cm);
    printf("Distance in inches: %.3f\n",inches);
    printf("Distance in feet: %.3f\n",feet);
    return 0;
}