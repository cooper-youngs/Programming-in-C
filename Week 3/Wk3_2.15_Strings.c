/*String data type is not built into C like char, int, or double. 
But can be stored in a character array 

Character array – sequence of items. Can declare string as char firstName[50]; 
which can store 50 characters. Also called a C string. 

Assigning value – string cannot be assigned a value like you would for other types 
where youd use something like, strOne = “Hello”.  

Must assign value using the strcpy(str1, str2) function 

Strcpy(str1, str2) copies each character in str2 into corresponding locations of str1. 

Str1 must be at least as large as str2 

Strings are always terminated with a null character '\0' adding one to lenght

can also declare and initialize at the same time if want compiler to decide string size
char firstName[] = "Julia"

When using scanf() for a string the string variable does not need to be preceded by a & symbol. 
But, only characters up to the first whitespace will be put into the string
scanf("%s", userString) 

Because a char variable s already an address, the address of the first character in the character sequence. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {
   char sentenceSubject[20];
   char sentenceVerb[20];
   char sentenceObject[20];

   strcpy(sentenceSubject, "boy");
   strcpy(sentenceVerb, "ate");

   scanf("%s", sentenceObject);

   printf("A ");
   printf("%s ", sentenceSubject);
   printf("%s ", sentenceVerb);
   printf("%s.\n", sentenceObject);

   return 0;
}