//C program to basic structure implementation using arrow operator
#include<stdio.h>
struct
{
    int roll;
    char name[20];
    float marks;
}s1={10,"ram",95.05}, s2={11,"sam",97.5};

int main()
{
   printf("student details:\n");
   printf("%d %s %f\n",(&s1)->roll, (&s1)->name, (&s1)->marks);
   printf("%d %s %f",(&s2)->roll, (&s2)->name, (&s2)->marks);
}
