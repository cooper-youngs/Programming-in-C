/*
Integers initialVal and finalVal are read from input. For each number from initialVal to finalVal both inclusive,
 output the number's value of dash characters ("-") on a new line.
*/

#include <stdio.h>

int main(void) {
   int initialVal;
	int finalVal;
   int i;
   int j;

   scanf("%d", &initialVal);
	scanf("%d", &finalVal);

   for(i = initialVal; i <= finalVal; ++i){

      for(j = 0; j < i; ++j){
      printf("-");
      }
      printf("\n");
}
   return 0;
}