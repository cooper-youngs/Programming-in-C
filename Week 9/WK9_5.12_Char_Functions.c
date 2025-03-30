/*
isalpha(c) -- Returns true if c is alphabetic: a-z or A-Z.

isdigit(c) -- Returns true if c is a numeric digit: 0-9.

isalnum(c) -- Returns true if c is alphabetic or a numeric digit. 
Thus, returns true if either isalpha or isdigit would return true.

isspace(c) -- Returns true if character c is a whitespace.

islower(c) -- Returns true if character c is a lowercase letter a-z.

isupper(c) -- Returns true if character c is an uppercase letter A-Z.

isblank(c) -- Returns true if character c is a blank character. Blank characters include spaces and tabs.

isxdigit(c) -- Returns true if c is a hexadecimal digit: 0-9, a-f, A-F.

ispunct(c) -- Returns true if c is a punctuation character. Punctuation characters include: !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~

isprint(c) -- Returns true if c is a printable character. Printable characters include alphanumeric, punctuation, and space characters.

iscntrl(c) -- Returns true if c is a control character. Control characters are all characters that are not printable.
    -ex. (null chars)

toupper(c) -- If c is a lowercase alphabetic character (a-z), returns the uppercase version (A-Z). 
If c is not a lowercase alphabetic character, just returns c.

tolower(c) -- If c is an uppercase alphabetic character (A-Z), returns the lowercase version (a-z). 
If c is not an uppercase alphabetic character, just returns c.

Variable myFriends is assigned with a string containing spaces read from input.
Write a for loop to replace each space character in myFriends with a semicolon (';').

Ex: If the input is Ayaka Sid Uma Tala Greg, then the output is:

Ayaka;Sid;Uma;Tala;Greg
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
   char myFriends[42];
   int i;

   // Assigns myFriends with a string containing spaces from input
	fgets(myFriends, 42, stdin);

   for (i = 0; myFriends[i] != '\0'; ++i) {
      if (isspace(myFriends[i])) {
         myFriends[i] = ';';
      }}

   printf("%s\n", myFriends);

   return 0;
}