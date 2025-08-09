//C Program to Read and Display Elements of an Array
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter array elements:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    
    printf("\nDisplay array elements:\n");
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
}
