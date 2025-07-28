//Fibonacci series upto given number n.
#include<stdio.h>
int main()
{
   int a=0,b=1,c,n;
   printf("enter a number:\n");
   scanf("%d",&n);
   while(a<n)
   {
       printf("%d ",a);
       c=a+b;
       a=b;
       b=c;

   }
}
   
