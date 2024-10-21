#include <stdio.h>

int main(){

   float radiusOfCircle, lengthOfRectangle, breadthOfRectangle, areaOfCircle, circumferenceOfCircle, areaOfRectangle, perimeterOfRectangle;

   printf("Enter the Radius of the circle, Length and Breadth of the rectangle :");
   scanf("%f %f %f",&radiusOfCircle, &lengthOfRectangle, &breadthOfRectangle);

   areaOfCircle = 3.14 * radiusOfCircle * radiusOfCircle;
   circumferenceOfCircle = 2 * 3.14 * radiusOfCircle;
   areaOfRectangle = lengthOfRectangle * breadthOfRectangle;
   perimeterOfRectangle = 2 * (lengthOfRectangle + breadthOfRectangle);

   printf("The area of the circle is %.2f \n",areaOfCircle);
   printf("The circumference of the circle is %.2f \n",circumferenceOfCircle);
   printf("The area of the rectangle is %.2f \n",areaOfRectangle);
   printf("The perimeter of the rectangle is %.2f \n",perimeterOfRectangle);

   return 0;

   }