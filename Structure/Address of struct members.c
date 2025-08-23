//C program to print the address of the structure members
#include<stdio.h>
struct jo
{
	int roll;
	char name[20];
	float marks;
}s1 ={10,"jothi",95.5};


int main()
{
    printf("values of struct members:\n");
    printf("%d %s %f\n",s1.roll,s1.name,s1.marks);
    printf("%d %s %f\n",(&s1)->roll,(&s1)->name,(&s1)->marks);
    
    printf("\nAddress of struct members:\n");
    printf("%p %p %p\n",&s1.roll,&s1.name,&s1.marks);
    printf("%p %p %p\n",&(&s1)->roll,&(&s1)->name,&(&s1)->marks);
}
