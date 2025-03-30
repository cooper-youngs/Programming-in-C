/*
A programmer can use an array to store a sequence of characters, known as a string.
 An example is: char movieTitle[20] = "Star Wars";. Because a string can be shorter than the character array, 
 a string in a char array must end with a special character known as a null character, written as '\0'. 
 Given a string literal like "Star Wars", the compiler automatically appends a null character.

 A char array of size 20 can store strings of lengths 0 to 19. 
 The longest string is 19, not 20, since the null character must be stored.

If a char array is initialized when declared, then the char array's size may be omitted, as in char userName[] = "Hellen"; . 
The compiler determines the size from the string literal, in this case 6 + 1 (for the null character), or 7.

An array of characters ending with a null character is known as a null-terminated string.

printf() automatically handles null-terminated strings, printing each character until reaching 
the null character that ends the string.

After a string is declared, a programmer may not later assign the string as in movieTitle = "Indiana Jones";.
That statement tries to assign a value to the char array variable itself, rather than copying each character
from the string on the right into the array on the left. 
Functions exist to copy strings, such as strcpy(), discussed elsewhere.

A programmer can traverse a string using a loop that stops when reaching the null character.

A common error is to loop for the string's array size rather than stopping at the null character. 
Such looping visits unused array elements beyond the null character. 
An even worse common error is to loop beyond the last valid element, 
which visits memory locations that are not part of the array. These errors are illustrated below.
*/

#include <stdio.h>

int main(void) {
   char userStr[20] = "1234567890123456789"; // Input string
   int i;
   
   // Prompt user for string input
   printf("Enter string (<20 chars): ");
   scanf("%s", userStr);
   
   // Print string
   printf("\n%s\n", userStr);
   
   // Look for '@'
   for (i = 0; userStr[i] != '\0'; ++i) {
      if (userStr[i] == '@') {
         printf("Found '@'.\n");
      }
   }
   
   
   // The following is an ERROR.
   // May print chars it shouldn't.
   // Problem: doesn't stop at null char.
   printf("\n\""); // Print opening "
   for (i = 0; i < 20; ++i) { // Print each char
      printf("%c", userStr[i]);
   }
   printf("\"\n"); // Print closing "
   
   
   // The following is an even WORSE ERROR.
   // Accesses beyond valid index range.
   // Program may crash.
   printf("\""); // Print opening "
   for (i = 0; i < 30; ++i) {
      printf("%c", userStr[i]); // Print each char
   }
   printf("\"\n");              // Print closing "
   
   return 0;
}

