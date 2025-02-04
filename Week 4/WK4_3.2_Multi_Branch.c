/*else if is used to specify extra conditions
if - statments execute if that condition is true
else if - statements execute if first condition is false and second condition is true
else - statements execute if all branches conditions evaluate to false.
as soon as one branch's condition is true, that branch executes and no subsequent branch is considered
compare that to if each of these were if statements instead of else if, then each condition would be check no matter what

Floating point numbers should not be compared using the == operator because they are imprecisely defined
characters will be compared by the ASCII value
strings should not be compared with the == operator
*/


#include <stdio.h>

int main(void) {
   int numYears;
   
   printf("Enter number years married: ");
   scanf("%d", &numYears);
   
   if (numYears == 1) {
      printf("Your first year -- great!\n");
   }
   else if (numYears == 10) {
      printf("A whole decade -- impressive.\n");
   }
   else if (numYears == 25) {
      printf("Your silver anniversary -- enjoy.\n");
   }
   else if (numYears == 50) {
      printf("Your golden anniversary -- amazing.\n");
   }
   else {
      printf("Nothing special.\n");
   }
   
   return 0;
}