//C program to print binary of given double number using integer pointer.
#include<stdio.h>
int main()
{
	double f;
	int i,j,count=0;
	printf("enter a number:\n");
	scanf("%lf",&f);
	unsigned int *p=(unsigned int*)&f;
	p+=1; // Move to higher 32 bits first
	for(i=1; i>=0; p--,i--)
	{
		for(j=31; j>=0; j--) //assuming little endian
		{
			printf("%d",(*p>>j)&1);
			++count;
			if(count==8)
			{
				printf(" "); //just for giving space after 8 bits for readability.
				count=0;
			}
		}
	}
	printf("\n");
}
