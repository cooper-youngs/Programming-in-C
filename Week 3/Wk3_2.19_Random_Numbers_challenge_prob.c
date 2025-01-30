/*Integers seedVal, minVal and maxVal are read from input. srand() is 
called with seedVal as the seed. minVal and maxVal represent the range 
of numbers that can be picked on a lottery ticket. Assign variables 
lottery1, lottery2, lottery3, and lottery4 each with a random number 
between minVal and maxVal, both inclusive.

Integers seedVal, minVal and maxVal are read from input. srand() is called
 with seedVal as the seed. minVal and maxVal represent the range of 
 numbers that can be picked on a lottery ticket. Assign variables 
 lottery1, lottery2, lottery3, and lottery4 each with a random number 
 between minVal and maxVal, both inclusive.
 */

int main(void) {
   int seedVal;
	int minVal;
	int maxVal;
	int lottery1;
	int lottery2;
	int lottery3;
	int lottery4;

   scanf("%d", &seedVal);
	scanf("%d", &minVal);
	scanf("%d", &maxVal);

   srand(seedVal);

//since we're just given variables, we know that to generate a range
//A to B we first need to find the amount of numbers in that range
// B - A, use that for the modulo operand, then you add by the 
//lowest value;  + A
   lottery1 = ((rand() % (maxVal - minVal + 1)) + minVal);
   lottery2 = ((rand() % (maxVal - minVal + 1)) + minVal);
   lottery3 = ((rand() % (maxVal - minVal + 1)) + minVal);
   lottery4 = ((rand() % (maxVal - minVal + 1)) + minVal);

	printf("%d\n", lottery1);
	printf("%d\n", lottery2);
	printf("%d\n", lottery3);
	printf("%d\n", lottery4);

   return 0;
}