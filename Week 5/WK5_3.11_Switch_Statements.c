/*
Switch statement can more clearly represtnet multi branch behavior
- for comparing variable to constant values
- executes first case, if expression matches executes cases statements then jumps to end
- if no case matches the default case statement is executed


Switch statements expression should be int or char, cannot be a string or floating point
cannot be a variable

order of case statements should not matter as long as there are break statements at the end of each
should always have a default case
- omitting break statements will cause next case statements to be executed, 'falling through' see below

*/

#include <stdio.h>

int main(void) {
   int dogAgeYears;
   int dogAgeMonths;

   printf("Enter your dog's age (in years): ");
   scanf("%d", &dogAgeYears);

   if (dogAgeYears == 0) {
      printf("Enter your dog's age in months: ");
      scanf("%d", &dogAgeMonths);

      switch (dogAgeMonths) {
         case 0:
         case 1:
         case 2:
            printf("That's 0-14 human months.\n");
            break;

         case 3:
         case 4:
         case 5:
         case 6:
            printf("That's 1-5 human years.\n");
            break;

         case 7:
         case 8:
            printf("That's 5-9 human years.\n");
            break;

         case 9:
         case 10:
         case 11:
         case 12:
            printf("That's 9-15 human years.\n");
            break;

         default:
            printf("Invalid input.\n");
            break;
      }
   }
   else {
      
      switch (dogAgeYears) {
        case 0:
         printf("That's 0-14 human years.\n");
         break;

      case 1:
         printf("That's 15 human years.\n");
         break;

      case 2:
         printf("That's 24 human years.\n");
         break;

      case 3:
         printf("That's 28 human years.\n");
         break;

      case 4:
         printf("That's 32 human years.\n");
         break;

      case 5:
         printf("That's 37 human years.\n");
         break;

      default:
         printf("Human years unknown.\n");
         break;
      }
   }

   return 0;
}