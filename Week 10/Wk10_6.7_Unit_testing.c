/*

Unit testing is the process of individually testing a small part or unit of a program, typically a function.
 A unit test is typically conducted by creating a testbench, a.k.a. test harness, 
 which is a separate program whose sole purpose is to check that a function returns correct output values 
 for a variety of input values. Each unique set of input values is known as a test vector.

Consider a function HrMinToMin() that converts time specified in hours and minutes to total minutes. 
The figure below shows a test harness that tests that function. The harness supplies various input vectors
 like (0,0), (0,1), (0,99), (1,0), etc.

 
#include <stdio.h>

int HrMinToMin(int origHours, int origMinutes) {
   int totMinutes;  // Resulting minutes
   
   totMinutes = (origHours * 60) + origMinutes;
   
   return origMinutes;
}

int main(void) {
   
   printf("Testing started\n");
   
   printf("0:0, expecting 0, got: %lf\n",    HrMinToMin(0,0) );
   printf("0:1, expecting 1, got: %lf\n",    HrMinToMin(0,1) );
   printf("0:99, expecting 99, got: %lf\n",  HrMinToMin(0,99));
   printf("1:0, expecting 60, got: %lf\n",   HrMinToMin(1,0) );
   printf("5:0, expecting 300, got: %lf\n",  HrMinToMin(5,0) );
   printf("2:30, expecting 150, got: %lf\n", HrMinToMin(2,30));
   // Many more test vectors would be typical...
   
   printf("Testing completed\n");
   
   return 0;
}

A better test harness would only print a message for incorrect output. 
The language provides a compact way to print an error message when an expression evaluates to false.
 assert() is a macro (similar to a function) that prints an error message and exits the program if 
 assert()'s input expression is false. The error message includes the current line number and the 
 expression (a nifty trick enabled by using a macro rather than an actual function; details are beyond our
scope). Using assert requires first including the assert library, part of the standard library, 
as shown below.

#include <stdio.h>
#include <assert.h>

double HrMinToMin(int origHours, int origMinutes) {
   int totMinutes;  // Resulting minutes
   
   totMinutes = (origHours * 60) + origMinutes;
   
   return origMinutes;
}

int main(void) {
   
   printf("Testing started\n");
   
   assert(HrMinToMin(0, 0) == 0);
   assert(HrMinToMin(0, 1) == 1);
   assert(HrMinToMin(0, 99) == 99);
   assert(HrMinToMin(1, 0) == 60);
   assert(HrMinToMin(5, 0) == 300);
   assert(HrMinToMin(2, 30) == 150);
   // Many more test vectors would be typical...
   
   printf("Testing completed\n");
   
   return 0;
}

Good test vectors also include border cases that represent fringe scenarios. 
For example, border cases for the above function might include inputs 0 and 0,
inputs 0 and a huge number like 9999999 (and vice-versa), two huge numbers, a negative number,
two negative numbers, etc. The programmer tries to think of any extreme (or "weird") inputs that 
might cause the function to fail.


Add two more statements to main() to test inputs 3 and -1. 
Use print statements similar to the existing one (don't use assert).

*/

#include <stdio.h>

// Function returns origNum cubed
int CubeNum(int origNum) {
   return origNum * origNum * origNum;
}

int main(void) {

   printf("Testing started\n");

   printf("2: Expecting 8, got: %d\n", CubeNum(2));

   printf("3: Expecting 27, got: %d\n", CubeNum(3));
   
   printf("-1: Expecting -1, got: %d\n", CubeNum(-1));

   printf("Testing completed\n");

   return 0;
}