#include<stdio.h>
int main()
{
    int n,i,j,d;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=1;
        for(j=0;j<i+1;j++)
        {
            printf("%d ",d);
            d=!d;
        }
        printf("\n");
    }
}
