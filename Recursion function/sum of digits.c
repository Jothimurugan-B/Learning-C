//C program to find the sum of digits using recursion function.
#include<stdio.h>
int sumofdig(int,int,int);
int main()
{
	int n,r,s=0,sum;
	printf("Enter a number:\n");
	scanf("%d",&n);
	sum = sumofdig(n,r,s);
	printf("sum = %d",sum);
}

int sumofdig(int n,int rem,int sum)
{
	if(n!=0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
		return sumofdig(n,rem,sum);
	}
	else
 	return sum;
}
