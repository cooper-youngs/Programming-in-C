/*
strings are equal if they have the same number of characters and each corresponding character
is identical

can compare two strings using: strcmp(str1, str2) == 0. The strcmp function returns 0 
if the strings are equal, and some non-zero value otherwise. The programmer must add 
 #include <string.h> to use strcmp. A common error is to omit the == 0 from 
 strcmp(str1, str2) == 0 when comparing for equality. 
 - if you did strcmp(str1, str2) it would just return 0
 Another common error is to compare two strings using str1 == str2, 
 this compares strings starting addresses.

 can also compare strings relatively
 - earlier letters are smaller values
 - capital letters are smaller than lowercase letters
 - shorter strings are smaller values than longer strings

 strcmp(str1, str2) < 0 str1 is less than str2
 strcmp(str1, str2) > 0 str1 is greater than str2
*/

#include <string.h>

int main(void) {
   char firstString[50];
   char secondString[50];

   scanf("%s", firstString);
   scanf("%s", secondString);

   if ( strcmp(firstString, secondString) < 0) {
      printf("%s %s\n", firstString, secondString);
   }
   else {
      printf("%s %s\n", secondString, firstString);
   }

   return 0;
}
