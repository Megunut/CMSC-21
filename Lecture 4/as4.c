/* Prints a table of powers of two using a while statement */

#include <stdio.h>

int main(void)
{
   int i, n, s, e;

   printf("This program prints a table of powers of two.\n");
   printf("Enter number of entries in table: ");
   scanf("%d", &n);

   i = 0;
   s = 1;   //used for the while loop in getting the powers of two
   e = 1;   //stores the value of the powers of two

   while (i <= n) {
      //gets the power of two by repeatedly multiplying the value of var(e) by 2
      //when i = 0, this while loop does not trigger since s is 1 and is greater then i = 0
      while (s <= i){
          e *= 2;
          s++;
      }
      printf("%10d%10d\n", i, e);   //prints the table of powers of two
      i++;
   }

   return 0;
}