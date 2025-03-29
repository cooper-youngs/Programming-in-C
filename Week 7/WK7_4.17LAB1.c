/*
Many user-created passwords are simple and easy to guess.
 Write a program that takes a simple password and makes it stronger by replacing characters using the key below, 
 and by appending "!" to the end of the input string. 
 You may assume that the string does not contain spaces and will always contain less than 50 characters.

i becomes 1
a becomes @
m becomes M
B becomes 8
s becomes $
*/
#include <stdio.h>
#include <string.h>

int main(void) {

   char userPassword[50];
   int i;

   //printf("Please enter your password:");
   scanf("%s",&userPassword);

   for (i = 0; i <= strlen(userPassword); ++i) {
    switch (userPassword[i]) {
        case 'i':
            userPassword[i] = '1';
            break;
        
        case 'a':
            userPassword[i] = '@';
            break;

        case 'm':
            userPassword[i] = 'M';
            break;

        case 'B':
            userPassword[i] = '8';
            break;
        
        case 's':
            userPassword[i] = '$';
            break;
    }
   }
   strcat(userPassword, "!");

   printf("%s\n",userPassword );

   return 0;
}
    