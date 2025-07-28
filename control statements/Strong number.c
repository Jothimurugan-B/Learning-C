// C program to find given number is strong number or not.
#include <stdio.h>
int main()
{
   int i, j, n, rem, fact = 1, sum = 0;
   printf("enter a num:\n");
   scanf("%d", &n);
   
   for(j = n; j != 0; j /= 10) // assigning j = n so we don't change original n
   {
       rem = j % 10;
       fact = 1;
       
       for(i = rem; i != 0; i--)
       {
           fact *= i;
       }
       
       sum += fact;
   }
   
   if(sum == n)
       printf("strong number\n");
   else
       printf("not strong number\n");

}
