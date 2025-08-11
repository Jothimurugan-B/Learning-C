//C program to find a string is palindrome or not.
#include<stdio.h>
int main()
{
	char s[50];
	int i,j,len;
	
	printf("Enter the string: \n");
	scanf("%[^\n]",s);
	for(len=0; s[len]; len++);
	
	for(i=0,j=len-1; i<=j; i++,j--)
	{
		if(s[i]==s[j])
			continue;

		else
			break;
	}
	if(i<j)
		printf("not palindrome\n");
	else
		printf("palindrome\n");

}
