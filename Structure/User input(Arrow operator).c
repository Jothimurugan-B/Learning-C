//C program to get structure members from user and print using Arrow operator
#include<stdio.h>
struct jo
{
	int roll;
	char name[20];
	float marks;
}s1;


int main()
{
    printf("Get values of struct members:\n");
    scanf("%d %s %f",&(&s1)->roll,(&s1)->name,&(&s1)->marks);
  
    printf("\nPrint values of struct members:\n");
    printf("%d %s %f\n",(&s1)->roll,(&s1)->name,(&s1)->marks);
}
