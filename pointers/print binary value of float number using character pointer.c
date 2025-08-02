#include<stdio.h>
int main()
{
	float f;
	int i,j,count=0;
	printf("enter a number:\n");
	scanf("%f",&f);
	unsigned char *p=(unsigned char*)&f;
	p+=3;
	for(i=3; i>=0;p--,i--)
	{
		for(j=7; j>=0; j--)
		{
			printf("%d",(*p>>j)&1);
			++count;
			if(count==4)     
			{
				printf(" "); //just for giving space after 4 bits for readability.
				count=0;
			}
		}
	}
       printf("\n%f\n",f);
}
