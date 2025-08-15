#include<stdio.h>
int main()
{
    int n,i,j,d,k;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=i+1;
        d=4;
        for(j=0;j<i+1;j++)
        {
          printf("%d ",k);
          k=k+d;
          --d;
        }
        
        printf("\n");
    }
    
}
