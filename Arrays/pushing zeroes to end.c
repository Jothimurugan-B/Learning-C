//C program to push zeroes in an array to end of the array.
#include<stdio.h>
int main()
{
  int i,j,n,z=0;

printf("Enter number of elements: ");
scanf("%d", &n);

int a[n]; 

printf("Enter array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n-z;i++)
{
    if(a[i]==0)
    {
        z++; //Zero count
        for(j=i;j<n-z;j++)
        {
            a[j]=a[j+1];
        }
        a[n-z]=0; //if it is first zero put in last,if its 2nd zero put that before 
                     //last zero and so on.
        i--;
    }
}
printf("After pushing zeroes:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
