/*
Define a function InspectVals() with no parameters that reads integers from input until -99 is read. 
InspectVals() should return 1 if all integers read before -99 are positive. 
Otherwise, InspectVals() should return 0.

Ex: If the input is 50 60 100 -99, then the output is:

All true

Note: Positive numbers are greater than 0.

*/

#include <stdio.h>

int InspectVals() {
   
   int currentNum = 0;
   
   while (currentNum != -99) {
      scanf("%d", &currentNum);
      if (currentNum <= 0) {
         return 0;
      }
      
      
      return 1;
   }
}

   

int main() {
	int allPositive;

	allPositive = InspectVals();

	if (allPositive) {
		printf("All true\n");
	}
	else {
		printf("Not all true\n");
	}

	return 0;
}