/*
strcpy(destStr, sourceStr) - Copies sourceStr (up to and including null character) to destStr.

strncpy(destStr, sourceStr, numChars) - Copies up to numChars characters

strcat(destStr, sourceStr) - Copies sourceStr (up to and including null character) to end of destStr (starting at destStr's null character).

strncat(destStr, sourceStr, numChars) - Copies up to numChars characters to destStr's end, then appends null character.

For strcpy(), a common error is to copy a source string that is too large, 
causing an out-of-range access in the destination string. 
Another common error is to call strcpy with the source string first rather than the destination string, 
which copies in the wrong direction.

strchr(sourceStr, searchChar) - Returns NULL if searchChar does not exist in sourceStr. 
(Else, returns address of first occurrence, discussed elsewhere).
NULL is defined in the string.h library.
second argument must be char


size_t strlen(sourceStr) - Returns number of characters in sourceStr up to, but not including, first null character. 
size_t is integer type.

int strcmp(str1, str2) - Returns 0 if str1 and str2 are equal, non-zero if they differ.

strcmp() is usually used to compare for equality, returning 0 if the strings are the same length and have identical characters.
 A common error is to use == when comparing C strings, which does not work. str1 == str2 compares the strings' addresses,
not their contents. Because those addresses will usually be different, str1 == str2 will evaluate to 0. 
This is not a syntax error, but clearly a logic error. 

Another common error is to forget to compare the result of strcmp with 0, as in if (strcmp(str1, str2)) {...}. 
The code is not a syntax error, but is a logic error because the if condition will be false (0) when the strings are equal. 
The correct condition would instead be if (strcmp(str1, str2) == 0) {...}. 
Although strcmp returns 0, a good practice is to avoid using if (!strcmp(str1,str2)) {...}
 because that 0 does not represent "false" but rather is encoding a particular situation.

strcmp(str1, str2) returns a negative number if str1 is less than str2, and a positive number if str1 is greater than str2. 
Evaluation first compares the character pair at element 0, then at element 1, etc., returning as soon as a pair differs.

strlen is often used to iterate through each string character in a loop.


#include <stdio.h>
#include <string.h>

int main(void) {
   char userName[15] = "Alan Turing";
   int i;
   
   printf("Before: %s\n", userName);
   
   for (i = 0; i < strlen(userName); ++i) {
      if (userName[i] == ' ') {
         userName[i] = '_';
      }
   }
   printf("After:  %s\n", userName);
   
   return 0;
}


stdio.h has several functions to support C strings. scanf can be used to read a string from the user input. 
For example, scanf("%s", myString) reads a string from the user input into myString, 
where a string is a sequence of characters excluding spaces, tabs, or newline.
 If a user types "John Smith<enter>", then myString will just be "John" because the string ends at the space after the 'n'.

Allowing spaces in a user's string input can be accomplished using the fgets function. fgets(str, num, stdin) 
reads one line of characters from user input, ending with a newline, and writes those characters into the C string str.
 The read characters may include spaces and tabs. If a newline character is read from the user input before num characters 
 are read, the newline character itself is also written into str, after which the function appends a null character.
  num is the maximum number of characters to be written into str. If num is 10 and the input line exceeds 10 characters, 
  only the first 9 characters will be written into str, followed by the null character; 
  the remaining input characters will not be read and will remain in user input.


Variables flowerStr, symbolStr, and numChars are assigned with a string for a flower name, a string of symbols,
 and an integer read from input. numChars represents the number of characters to copy. Copy numChars characters from symbolStr
  to the beginning of flowerStr.

Ex: If the input is:

stock
!!!!!
1
then the output is:

!tock
*/
#include <stdio.h>
#include <string.h>

int main(void) {
   char studentName[20];
	char searchChar;
	int i;

   scanf("%s", studentName);
	scanf(" %c", &searchChar);

   for (i = 0; i < strlen(studentName); ++i) {
      if (studentName[i] == searchChar) {
         studentName[i] = '#';
   }
   }

	printf("%s\n", studentName);

   return 0;
}

