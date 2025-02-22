/*
A conditional expression has the form  condition ? exprWhenTrue : exprWhenFalse.
example, if x is 2, then the conditional expression (x == 2) ? 5 : 9 * x evaluates to 5.
*/

/*
Using a conditional expression, write a statement that increments numUsers if updateDirection is 1, 
otherwise decrements numUsers. Ex: if numUsers is 8 and updateDirection is 1, numUsers becomes 9; 
if updateDirection is 0, numUsers becomes 7.
*/

#include <stdio.h>

int main(void) {
   int numUsers;
   int updateDirection;

   scanf("%d", &numUsers);
   scanf("%d", &updateDirection);

   numUsers = (updateDirection == 1)? numUsers + 1: numUsers - 1;

   printf("New value is: %d\n", numUsers);

   return 0;
}