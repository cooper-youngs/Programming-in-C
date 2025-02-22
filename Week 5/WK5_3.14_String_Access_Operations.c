/*
Can access the character at index x using following notation
string[x]

Can similarly assign new character at any index of a string using following notation
string[x] = "b"
- cannot assign multiple characters to a single string index

compiler ends all strings with a null character (/0), this tells compiler where the end of the string is
- due to this must make sure that size of string created is always 1 more than the actual size of the string
- cannot overwrite null character; this may result in a different variables memory location being overwritten

strlen() -this returns the length of any string
- can use strlen() - 1 to access and assign characters to the end of any string

strcat(str1, str2) -this appends str2 to the end of str1

remember that 'x' will explicitly create a char, using "x" makes it a string, chars cannot be used in the strcat() function


*/
#include <stdio.h>
#include <string.h>

int main(void) {
   char currDate[20];
   char currYear[20];

   scanf("%s", currDate);
   scanf("%s", currYear);

   strcat(currDate, "/");
   strcat(currDate, currYear);

   printf("%s\n", currDate);

   return 0;
}