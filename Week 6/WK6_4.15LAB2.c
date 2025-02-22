/*
Statistics are often calculated with varying amounts of input data. 
Write a program that takes any number of non-negative integers as input, and outputs the max and average.
A negative integer ends the input and is not included in the statistics. 
Assume the input contains at least one non-negative integer.

Output the average with two digits after the decimal point followed by a newline, which can be achieved as follows:
printf("%0.2lf\n", average);
*/

#include <stdio.h>

int main(void) {

   int userNum;
   int max;
   double average;
   int sum;
   int countNums;

   userNum = 0;
   countNums = 0;
   sum = 0;
   max = 0;


   while (userNum >= 0) {
    scanf("%d", &userNum);

    if (userNum >= 0){
    countNums += 1;
    sum += userNum;
    if (userNum > max) {
        max = userNum;
    }
    }
}
    average = (double)sum / countNums;
    printf("%d %0.2lf\n", max, average);


   return 0;
}