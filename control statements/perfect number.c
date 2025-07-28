// program to find given number is perfect or not.
#include<stdio.h>
int main()
{
    int sum=0,n,i=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    while(i<n)
    {
        if((n%i)==0)
        {
            sum+=i;
        }
        
        i++;
        
    }
    if(sum==n)
    {
       printf("perfect number\n");
    }
    else
    printf("not perfect\n");
    
}
