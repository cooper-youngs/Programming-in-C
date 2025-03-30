/*
Failing to return a value for a function is another common error. 
If execution reaches the end of a function's statements, the function automatically returns

Sometimes a function with a missing return statement (or just return;) still returns the correct value. 
The reason is that the compiler uses a memory location to return a value to the calling expression. 
That location may have also been used by the compiler to store a local variable of that function. 
If that local variable happens to be the item that was supposed to be returned, 
the value in that location is the correct return value. 
But a later seemingly unrelated change to a function, like defining a new variable, 
may cause the compiler to use different memory locations, and the function suddenly no longer returns
the correct value, leading to a bewildered programmer.

#include <stdio.h>

int StepsToFeet(int baseSteps) {
   const int FEET_PER_STEP = 3;  // Unit conversion
   int feetTot;              // Corresponding feet to steps
   
   feetTot = baseSteps * FEET_PER_STEP;

   NO RETURN STATEMENT
}

int main(void) {
   int stepsInput;      // User defined steps
   int feetTot;         // Corresponding feet to steps
   
   // Prompt user for input
   printf("Enter number of steps walked: ");
   scanf("%d", &stepsInput);
   
   // Call functions to convert steps to feet
   feetTot = StepsToFeet(stepsInput);
   printf("Feet: %d\n", feetTot);
   
   return 0;
}

Using the CelsiusToKelvin function as a guide, create a new function, changing the name to KelvinToCelsius,
 and modifying the function accordingly.

*/

#include <stdio.h>

double CelsiusToKelvin(double valueCelsius) {
   double valueKelvin;

   valueKelvin = valueCelsius + 273.15;

   return valueKelvin;
}

double KelvinToCelsius(double valueKelvin) {
   double valueCelsius;

   valueCelsius = valueKelvin - 273.15;

   return valueCelsius;
}

int main(void) {
   double valueC;
   double valueK;

   valueC = 10.0;
   printf("%lf C is %lf K\n", valueC, CelsiusToKelvin(valueC));

   scanf("%lf", &valueK);
   printf("%lf is %lf C\n", valueK, KelvinToCelsius(valueK));

   return 0;
}