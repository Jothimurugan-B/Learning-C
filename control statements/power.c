//C program to find power of a given number
#include<stdio.h>
int main()
{
   int n,p,temp,i=2;
   printf("enter num and pow:\n");
   scanf("%d %d",&n,&p);
   temp=n;
   while(i<=p)
   {
       n=n*temp;
       i++;
   }
   printf("%d",n);
}
