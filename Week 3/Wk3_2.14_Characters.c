/*use char to initialize character variable
character literal is surrounded with single quotes '' see below'
specify a character variable in a printf statment with %c
scanf use %c to get one character from input. A space before %c causes scanf to ignore leading whitespace.


program below will take two characters as input at once, ignoring any leading whitespace, if more than 2 characters supplied it will only use the first 2*/

#include <stdio.h>

int main(void) {
   char bodyChar;
   char headChar;

   printf("Type two characters: ");
   scanf(" %c", &bodyChar);
   scanf(" %c", &headChar);

   // Output arrow body then head
   printf("%c%c%c", bodyChar, bodyChar, bodyChar);
   printf("%c\n", headChar);

   return 0;
}