//C program to find given number is prime or not.
#include <stdio.h>
int main()
{
   int n,count=0,i;
   printf("enter a number:\n");
   scanf("%d",&n);
   for(i=2;i<n;i++)
   {
       if((n%i)==0)
       {
          break;
       }
      
   }
   if(i==n)
   {
       printf("prime number\n");
   }
   else 
   printf("not prime number\n");
}
