/*
using #include <ctype.h> get access to many character operations

isalpha() - returns true is char is alphabetic a-z or A-Z
isdigit() - returns true if char is number 0-9
isspace() - returns true if char is space
toupper() - returns char in uppercase; will not modify string
tolower() - returns char in lowercase; will not modify string

 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
   char firstChar;
   char secondChar;

   scanf("%c", &firstChar);
   scanf("%c", &secondChar);
//checks if each char is first an alphabetic char, then check if its also uppercase, if either firstChar or secondChar satisifies
//then statements run
   if (((isalpha(firstChar)) && (firstChar == toupper(firstChar))) || ((isalpha(secondChar)) && (secondChar == toupper(secondChar)))) {
      printf("Valid input\n");
   }
   else {
      printf("Invalid input\n");
   }

   return 0;
}