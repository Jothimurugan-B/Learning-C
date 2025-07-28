// c program to find given number is armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
{
   int n, i, temp, sum = 0, res;
   printf("enter a num:\n");
   scanf("%d", &n);
   
   temp = n;
   for(i = 0; temp != 0; i++)
   {
       temp = temp / 10;
   }
    temp = n;
   while(temp != 0)
   {
       res = temp % 10;
       sum = sum + pow(res, i);
       temp = temp / 10;
   }
   
   if(sum == n)
       printf("armstrong\n");
   else
       printf("not armstrong\n");
  
}
