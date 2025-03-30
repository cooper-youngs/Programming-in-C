/*
Modular development is the process of dividing a program into separate modules that can be 
developed and tested separately and then integrated into a single program.

Incremental development is a process in which a programmer writes, compiles,
 and tests a small amount of code, then writes, compiles, and tests a small amount more
  (an incremental amount), and so on.

  A function stub is a function definition whose statements have not yet been written.

 A general guideline (especially for beginner programmers) is that a function's definition 
 usually shouldn't have more than about 30 lines of code, although this guideline is not a strict rule.

Define stubs for the functions called by the below main(). Each stub should print "FIXME: Finish FunctionName()" followed by a newline, and should return -1. Example output:
FIXME: Finish GetUserNum()
FIXME: Finish GetUserNum()
FIXME: Finish ComputeAvg()
Avg: -1

*/

#include <stdio.h>

int GetUserNum() {
   printf("FIXME: Finish GetUserNum()\n");
   return -1;
}

int ComputeAvg(int userNum1, int userNum2) {
   printf("FIXME: Finish ComputeAvg()\n");
   return -1;
}



int main(void) {
   int userNum1;
   int userNum2;
   int avgResult;

   userNum1 = GetUserNum();
   userNum2 = GetUserNum();

   avgResult = ComputeAvg(userNum1, userNum2);

   printf("Avg: %d\n", avgResult);

   return 0;
}