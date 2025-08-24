//C Program to access structure members using pointer(using dot and arrow operators)
#include<stdio.h>
struct jo
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct jo v1,v2;
    struct jo *p1=&v1,*p2=&v2; //To access struct members using pointer
    printf("Get student 1 details:\n");
    scanf("%d %[^\n] %f",&p1->roll,p1->name,&p1->marks); //using pointer and -> operator
    printf("Get student 2 details:\n");
    scanf("%d %[^\n] %f",&(*p2).roll,(*p2).name,&(*p2).marks); //using pointer and '.' operator
    
    printf("\nDisplay student details:\n");
    printf("%d %s %f\n",p1->roll,p1->name,p1->marks);
    printf("%d %s %f",(*p2).roll,(*p2).name,(*p2).marks);
}
