/*
A declared name is only valid within a region of code known as the name's scope. 
Ex: A variable userNum declared in main() is only valid within main(), from the declaration to main()'s end.

However, a variable may be declared within other blocks too. 
A block is a brace-enclosed {...} sequence of statements, such as found with an if-else, 
for loop, or while loop. A variable name's scope extends from the declaration to the closing brace }.

Programmers commonly declare a for loop's index variable in the for loop's initialization statement. 
That index variable's scope covers the other parts of the for loop, up to the for loop's closing brace. 

The approach of declaring a for loop's index variable in the for loop's initialization statement makes clear that the variable's
 sole purpose is to serve as that loop's index.

Ex. for (int i = 0; i < 5; ++i) {
   x = x + i;
}

Common error is to initialize a var inside a for loop where you want the var to persist across iterations
(see below code)
*/

#include <stdio.h>

int main(void) {
   int i = 0;
   
   while (i < 5) {
      int tmpSum = 0;
      tmpSum = tmpSum + i; // Logic error: Sum is always just i
      printf("tmpSum: %d\n", tmpSum);
      i = i + 1;
   }
   
   return 0;
}