//C program to find the odd and even numbers and display it.
#include<stdio.h>
int main() 
{
    int a[10],i,n,count=0;
   
    printf("Enter array elements:\n");
    for(i = 0; i < 10; i++) 
    scanf("%d", &a[i]);
    
    printf("Enter number to search:");
    scanf("%d",&n);

    for(i=0;i<10;i++) 
    {
        if(a[i]==n) 
        {
            count=1;
            break;
        }
    }
    if(count)
        printf("%d is present in the array\n",n);
    else
        printf("%d is not present in the array\n",n);

}
