//C program to insert an element in an array based on index given
#include<stdio.h>
int main()
{
	int a[100],n,pos,i,value;

	printf("Enter number of elements:");
	scanf("%d",&n);

	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	

	printf("Enter position and value to insert:");
	scanf("%d %d",&pos,&value);

	for(i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=value;
	n++;
	
	printf("Array after insertion:\n");
	for(i=0;i<n;i++) 
	printf("%d ",a[i]);
}
