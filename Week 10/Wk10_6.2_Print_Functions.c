/*
One benefit of a print function is that complex output statements can be written in code once. 
Then the print function can be called multiple times to produce the output instead of rewriting 
complex statements for every necessary instance. Changes to output and formatting are made easier 
and are less prone to error.

Define a function PrintDifference() that has two integer parameters, and outputs "Outcome: " followed by the result of subtracting the second parameter from the first parameter. End with a newline. PrintDifference() should not return any value.

Ex: If the input is -10 11, then the output is:

Outcome: -21

*/

#include <stdio.h>

void PrintDifference(int num1, int num2) {
   
   printf("Outcome: %d\n", num1 - num2);
}

int main(void) {
	int numA;
	int numB;

	scanf("%d", &numA);
	scanf("%d", &numB);

	PrintDifference(numA, numB);

	return 0;
}