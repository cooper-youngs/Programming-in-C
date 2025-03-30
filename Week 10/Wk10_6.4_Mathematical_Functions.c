/*
Complete the program by writing and calling a function that converts a temperature from 
Celsius into Fahrenheit using the formula: 

F = (9/5) * C + 32

#include <stdio.h>


// FINISH  Define CelsiusToFahrenheit function here
double CelsiusToFahrenheit(double tempCel) {
   double tempFahr;
   
   tempFahr = (9.0/5.0) * tempCel + 32;
   
   return tempFahr;
}

int main(void) {
   double tempF;
   double tempC;

   printf("Enter temperature in Celsius:\n");
   scanf("%lf", &tempC);

   tempF = CelsiusToFahrenheit(tempC); // FIXME

   printf("Fahrenheit: %lf\n", tempF);

   return 0;
}


ComputeBaseArea() has two double parameters as a prism's base length and base width. 
The function returns the area of the prism's base as a double. The area of the base is calculated by: 

ComputeVolume() has three double parameters as a prism's base length, base width, and height. 
The function returns the prism's volume as a double, and uses the ComputeBaseArea() 
function to calculate the prism's base area. The volume is calculated by: 


*/

#include <stdio.h>

double ComputeBaseArea(double baseLength, double baseWidth) {
   double area = baseLength * baseWidth;
   
   return area;
}

double ComputeVolume(double baseLength,double baseWidth,double height) {
   
   double volume = (baseLength * baseWidth) * height; 
   
   return volume; 
   
}

int main(void) {
   double userBaseLength;
	double userBaseWidth;
	double userHeight;

   scanf("%lf", &userBaseLength);
	scanf("%lf", &userBaseWidth);
	scanf("%lf", &userHeight);

   printf("Base length: %.1lf\n", userBaseLength);
	printf("Base width: %.1lf\n", userBaseWidth);
	printf("Height: %.1lf\n", userHeight);
   printf("Base area: %.1lf\n", ComputeBaseArea(userBaseLength, userBaseWidth));
   printf("Volume: %.1lf\n", ComputeVolume(userBaseLength, userBaseWidth, userHeight));

   return 0;
}