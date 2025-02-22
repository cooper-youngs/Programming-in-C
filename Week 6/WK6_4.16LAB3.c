/*
Write a program whose input is a character and a string, and whose output indicates the number of times 
the character appears in the string. The output should include the input character and use the plural form, n's, 
if the number of times the characters appears is not exactly 1.
You may assume that the string does not contain spaces and will always contain less than 50 characters.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

   char userChar; 
   char checkString[50];
   int i;
   int count;

   count = 0;
   scanf("%c", &userChar);
   scanf("%s", &checkString);

   for (i = 0; i < strlen(checkString); i++) {
    if (userChar == checkString[i]) {
        count += 1;
    }
   }

   if (count == 1) {
    printf("%d %c\n", count, userChar);
   }
   else {
    printf("%d %c's\n", count, userChar);
   }

   return 0;
}