//Lower left aligned traingle pattern
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       for(j=i;j<n;j++)
       printf("* ");
       
       printf("\n");
    }
    
}
