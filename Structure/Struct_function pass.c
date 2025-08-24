//C program to pass structure variable to a function
//getting values in one function and displaying values in another function
#include<stdio.h>
struct jo
{
    int num;
    char name[20];
    float marks;
};
void scan(struct jo *);
void print(struct jo);

int main()
{
    struct jo v;
    scan(&v);
    print(v);
}

void scan(struct jo *p) //Function to scan struct members values using pointer
{
    printf("Get struct members values:\n");
    scanf("%d %s %f",&p->num,p->name,&p->marks);
}

void print(struct jo v) //Function to display struct member values
{
    printf("Display struct members values:\n");
    printf("%d %s %f",v.num,v.name,v.marks);
}
