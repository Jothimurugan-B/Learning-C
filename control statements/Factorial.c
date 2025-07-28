//c program to find factorial of given number.
#include<stdio.h>
int main()
{
   int i,n,fact=1;
   printf("enter a num:\n");
   scanf("%d",&n);
   for(i=n;i!=0;i--)
   {
       fact*=i;
   }
   printf("fact=%d\n",fact);
}
