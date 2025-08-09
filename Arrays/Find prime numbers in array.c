//C program to find prime number in array and display it.
#include <stdio.h>
int main()
{
    int a[20];
    int i,j,n,prime=0,count=0;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
    printf("Prime numbers:\n");
    for(i=0;i<n;i++)
    {    
         if (a[i]<=1) 
            continue;
            
        count=0;
        for(j=2;j<=(a[i]/2);j++)
        {
            if(a[i]%j==0)
            {
            count++;
            break;
            }
        }
        if(count==0)
        {
            prime++;
            printf("%d ",a[i]);
        }
    }
    printf("\nprime count=%d\n",prime);
}
