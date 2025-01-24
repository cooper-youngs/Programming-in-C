/* Assign omelettesCount with the current value of omelettesCount
multiplied by 6. 
Want to use a compound operator*/
#include <stdio.h>

int main(void) {
	int omelettesCount;

   printf("Please enter the initial number of omelettes: ");
	scanf("%d", &omelettesCount);

	printf("Initial number of omelettes: %d\n", omelettesCount);

   omelettesCount *= 6;

   printf("Updated number of omelettes: %d\n", omelettesCount);

   return 0;
}