/*
Given a sorted list of integers, output the middle integer. 
A negative number indicates the end of the input (the negative number is not a part of the sorted list). 
Assume the number of integers is always odd.

Ex: If the input is:

2 3 4 8 11 -1 
the output is:

Middle item: 4
The maximum number of list values for any test case should not exceed 9. If exceeded, output "Too many numbers".

Hint: First read the data into an array. Then, based on the array's size, find the middle item.
*/

#include <stdio.h>

int main(void) {
   const int MAX_ELEMENTS = 9;
   int userValues[MAX_ELEMENTS];  // Set of data specified by the user
   int i = 0, size = 0, value;
   
   while (1) {
       scanf("%d", &value);
       
       if (value < 0) {
           break;
       }
       
       if (size == MAX_ELEMENTS) {
           printf("Too many numbers\n");
           return 0; 
       }
       
    
       userValues[size] = value;
       size++;
   }
   
   int mid = size / 2;
   printf("Middle item: %d\n", userValues[mid]);
   
   return 0;
}
