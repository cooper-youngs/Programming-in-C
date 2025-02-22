/*
A year in the modern Gregorian Calendar consists of 365 days. In reality, the earth takes longer to rotate around the sun. 
To account for the difference in time, every 4 years, a leap year takes place. 
A leap year is when a year has 366 days: An extra day, February 29th. 

The requirements for a given year to be a leap year are:

1) The year must be divisible by 4

2) If the year is a century year (1700, 1800, etc.), the year must be evenly divisible by 400; therefore, both 1700 and 1800 are not leap years

Some example leap years are 1600, 1712, and 2016.

Write a program that takes in a year and determines whether that year is a leap year.*/


#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int inputYear;
   bool isLeapYear = false;
   
   scanf("%d", &inputYear);
   //check if it is century year using % 100
   //if it is, check if divisible by 400, if it is set bool to true
   //if not a century year, check if divisible by 4
   //if divisble by 4, set bool to true, if not dont change bool
   //last if statement check if bool is true, prints leap year or not leap year

   if (inputYear % 100 == 0) {
    isLeapYear = (inputYear % 400) == 0;
   }
   else {
    isLeapYear = (inputYear % 4) == 0;
   }

   if (isLeapYear){
    printf("%d - leap year\n", inputYear);
   }
   else {
    printf("%d - not a leap year\n", inputYear);
   }
   return 0;
}