//c program to find array is palindrome or not.
#include<stdio.h>
int main()
{
    int a[100];
    int i,j,n;
     
    printf("enter no. of elements:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0,j=n-1;i<=j;i++,j--)
    {
        if(a[i]==a[j])
        continue;
        
        else
        break;
    }
    if(i<j)
    printf("not palindrome\n");
    else
    printf("palindrome\n");
    
}
