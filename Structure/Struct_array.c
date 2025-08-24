// C program to use array of structures
// Getting values for structure array and displaying them
#include<stdio.h>
struct jo
{
	int num;
	char ch;
};

int main()
{
	int i;
	struct jo v[3];
  
	printf("Enter structure array elements:\n");
	for(i=0; i<3; i++) //This loop for getting struct array values
	{
		printf("num and ch:");
		scanf("%d %c",&v[i].num,&v[i].ch);
	}
  
	printf("Display structure array elements:\n");
  for(i=0; i<3; i++) //This loop for display struct array values
		printf("%d %c\n",v[i].num,v[i].ch);
  
}
