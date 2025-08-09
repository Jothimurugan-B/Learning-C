//C program to reverse the array elements
#include<stdio.h>
int main()
{
 int a[5],i,j,temp;
 printf("Enter array elements:\n");
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 
 for(i=0,j=4;i<j;i++,j--)
 {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
 }
 printf("After reversing:\n");
 for(i=0;i<5;i++)
 printf("%d ",a[i]);
}
