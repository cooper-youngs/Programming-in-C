/*
A program may perform the same operation repeatedly, causing a large and confusing program due to 
redundancy. Program redundancy can be reduced by creating a grouping of predefined 
statements for repeatedly used operations, known as a function.

A function is a named list of statements.

A function definition consists of the new function's name and a block of statements.
 Ex: double CalcPizzaArea() { block of statements }
A function call is an invocation of a function's name, causing the function's statements to execute.

Example:

#include <stdio.h>

double CalcPizzaArea() {
 double pizzaDiameter;
 double pizzaRadius;
 double pizzaArea;
 double piVal = 3.14159265;

 pizzaDiameter = 12.0;
 pizzaRadius = pizzaDiameter / 2.0;
 pizzaArea = piVal * pizzaRadius * pizzaRadius;
 return pizzaArea;
}

int main(void) {
 printf("12 inch pizza is %lf inches squared\n",
    CalcPizzaArea());
 
 return 0;
}

A function may return one value using a return statement. 
Below, the ComputeSquare() function is defined to have a return type of int; 
thus, the function's return statement must have an expression that evaluates to an int.

A return type of void indicates that a function does not return any value.

A parameter is a function input specified in a function definition. 
Ex: A pizza area function might have diameter as an input.

An argument is a value provided to a function's parameter during a function call. 
Ex: A pizza area function might be called as CalcPizzaArea(12.0) or as CalcPizzaArea(16.0).

Good practice is to use the keyword void for an empty parameter list, as in: int DoSomething(void)

Define a function PyramidVolume with double data type parameters 
baseLength, baseWidth, and pyramidHeight, that returns as a double the volume of a 
pyramid with a rectangular base. Relevant geometry equations:
Volume = base area x height x 1/3
Base area = base length x base width.
(Watch out for integer division).
*/


#include <stdio.h>

double PyramidVolume ( double baseLength, double baseWidth, double pyramidHeight)
{
   double baseArea;
   double volume;
   
   baseArea = baseLength * baseWidth;
   volume = baseArea * pyramidHeight * (1.0/3.0);
   
   return volume;
   
}

int main(void) {
   double userLength;
   double userWidth;
   double userHeight;

   scanf("%lf", &userLength);
   scanf("%lf", &userWidth);
   scanf("%lf", &userHeight);

   printf("Volume: %f\n", PyramidVolume(userLength, userWidth, userHeight) );

   return 0;
}