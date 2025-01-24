/*Assume that pastas cost 10 dollars each, pizzas cost 7 dollars each, and burritos cost 
8 dollars each. Given variables numPastas, numPizzas, and numBurritos read from input, compute 
the total cost of all the pastas, pizzas, and burritos, and assign combinedCost with the result.

Ex: If the input is 6 14 35, then the output is:*/

#include <stdio.h>

int main(void) {
   int pastaPrice = 10;
	int pizzaPrice = 7;
	int burritoPrice = 8;
	int numPastas;
	int numPizzas;
	int numBurritos;
	int combinedCost;

    printf("Please enter the number of Pastas, Pizzas, and Burritos. (enter a number then press enter):");

	scanf("%d", &numPastas);
	scanf("%d", &numPizzas);
	scanf("%d", &numBurritos);

//parenthesis are not necessary but improve readability
   combinedCost = (numPastas * pastaPrice) + (numBurritos * burritoPrice) + (numPizzas * pizzaPrice);

   printf("Cost: %d\n", combinedCost);

   return 0;
}