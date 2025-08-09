// C program to count frequency of each unique elements in array
#include <stdio.h>
int main()
{
  int a[]={1,2,3,5,2,3,4,4,4,9};
  int n,i,j,k,count=0;
  n = sizeof a/sizeof a[0];
  for(i=0;i<n;i++)
  {
      for(k=0;k<i;k++)
      {
          if(a[i]==a[k])
          break;
      }
     if(i==k) //here i is current element ,it is comparing with before elements(k) ,when (i==k)means first time only that elemnt coming
     
     {
              count=0;
      for(j=i;j<n;j++)
      {
          if(a[i]==a[j])
          count++;
      }
       printf("%d : %d times\n",a[i],count);
      
      }
     
  }
  
}
