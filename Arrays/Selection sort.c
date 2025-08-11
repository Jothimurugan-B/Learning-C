#include<stdio.h>
int main()
{
    int n,i,j,temp;
    int a[50];
   
    printf("enter number of elements:\n");
    scanf("%d",&n);
    
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("after selection sort:\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
