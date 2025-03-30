#include <stdio.h>
#include <string.h>

int main(void) {

   char s[100];      // buffer for string input
   char result[6];
   int i;
   int start;

   scanf("%s", &s);

   start = (strlen(s) - 5) / 2;

   printf("Midfix: ");

   for (i = 0; i < 5; ++i) {
    printf("%c", s[start + i]);
   }

   printf("\n");
   return 0;

}

