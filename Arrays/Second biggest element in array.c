//C program to find biggest and second biggest element in array.
#include<stdio.h>
int main()
{
    int a[100],n,max1,max2,i;
    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++) 
    scanf("%d",&a[i]);
    
    if(a[0]>a[1])
    {
      max1=a[0];
      max2=a[1];
    }
    else if(a[1]>a[0])
    {
        max1=a[1];
        max2=a[0];
    }

    for(i=2;i<n;i++) 
    {
        if(a[i]>max1) 
        {
            max2=max1;
            max1=a[i];
        } 
        else if(a[i]>max2 && a[i]!=max1) 
        {
            max2=a[i];
        }
    }

    printf("\nBiggest element=%d\n",max1);
    printf("Second biggest element=%d\n",max2);

}
