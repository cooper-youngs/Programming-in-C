//The syntax for outputting the double myFloat with two difits 
//after the decimal would look like this. printf("%.2lf", myFloat)
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void) {
   double sphereVolume;
   double sphereRadius;

   scanf("%lf", &sphereRadius);

   sphereVolume = (4.0/3.0) * M_PI * (sphereRadius * sphereRadius * sphereRadius);

   printf("%.2lf\n", sphereVolume);

   return 0;
}