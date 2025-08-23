//C program for basic structure implementation using dot operator
#include<stdio.h>
struct jo
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
   struct jo s1={10,"ram",95.05}, s2={11,"sam",97.5};
   printf("%d %s %f\n",s1.roll, s1.name, s1.marks);
   printf("%d %s %f",s2.roll, s2.name, s2.marks);
}
