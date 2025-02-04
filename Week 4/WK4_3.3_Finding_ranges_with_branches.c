/*can detect ranges using an if else if structure and the <, > operators
works because when you use else if, the previous branches condition MUST be false
so in reality when you're on the 2nd or more else if, that condition is really a 
if (prev condition) false AND current conditoin true*/



/*When the given integer variable numPassengers is:

greater than or equal to 14, output "Too many passengers".
between 9 inclusive and 14 exclusive, output "Giant van".
between 0 exclusive and 8 inclusive, output "Compact van".
less than or equal to 0, output "Invalid input".
End with a newline.
*/

#include <stdio.h>

int main(void) {
   int numPassengers;

   scanf("%d", &numPassengers);

   if (numPassengers >= 14) {
      printf("Too many passengers\n");
   }
   else if (numPassengers >= 9) {
      printf("Giant van\n");
   }
   //doing only greater than here because it specifies between 0 exclusive and 8 inclusive
   else if (numPassengers > 0) {
      printf("Compact van\n");
   }
   else {
      printf("Invalid input\n");
   }

   return 0;
}