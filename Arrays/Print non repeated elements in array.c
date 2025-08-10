//C program to print the non repeated elements of an array.
#include<stdio.h>
int main()
{
  int a[100];
  int n,i,j,k;
  printf("Enter number of array elements:");
  scanf("%d",&n);
  
  printf("Enter array elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  printf("Non Repeated elements are:\n");
  for(i=0;i<n;i++)
  {
      for(k=0;k<i;k++)
      {
          if(a[i]==a[k])
          break;
      }
      
     if(i==k) //means first time this element appeared
     {
      for(j=i+1;j<n;j++)
      {
          if(a[i]!=a[j])
           continue;
           else
           break;
      }
      
      if(j==n)
      printf("%d ",a[i]);
     }
     
  }
}
