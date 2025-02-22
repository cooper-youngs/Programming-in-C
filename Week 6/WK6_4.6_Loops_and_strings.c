/*
Variable checkStr is assigned with a string read from input. For each character in checkStr that is a letter,
 increment count by 1. Then, output "Valid" if count is at least 4 and checkStr's length is greater than 7. 
 Otherwise, output "Invalid".
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
   char checkStr[20];
   int i;
   int count;

   scanf("%s", checkStr);

   count = 0;

   for (i = 0; i < strlen(checkStr); i++) {
      if (isalpha(checkStr[i])) {
         count += 1; 
      }
   }
   if ((count >= 4) && (strlen(checkStr) > 7)) {
      printf("Valid");
   }
   else {
      printf("Invalid");
}
   return 0;
}