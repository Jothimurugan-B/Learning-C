//c program to print twin prime numbers upto given range.
#include <stdio.h>
int main()
{
    int i,n,a,b,count=0,prev=0;
   printf("enter a range:\n");
   scanf("%d",&a);
    for(n=1;n<=a;n++)
  {
      count=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        if(n==prev+2)
        printf("(%d,%d)",prev,n);
        else
        prev=n;
        
    }
    
  }
}
