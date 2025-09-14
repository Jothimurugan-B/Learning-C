// C program to create a singly linked list by insertion at beginning and display it in forward and reverse order.
#include<stdio.h>
#include<stdlib.h>
struct jo
{
    int n;
    char s[20];
    float marks;
    struct jo *next;
};
void add_begin(struct jo**);
void print(struct jo*);
void rev_print(struct jo*);

int  main()
{
    struct jo *head=0;
    char op;
    do
    {
      add_begin(&head);
      printf("Do you want add another node(y or n):\n");
      scanf(" %c",&op);
    }while(op =='y');
    
    print(head);
    printf("Print stud details in reverse:\n");
    rev_print(head);
}

void add_begin(struct jo**hptr)
{
    struct jo *new;
    new=(struct jo*)malloc(sizeof(struct jo));
    
    new->next=0;
    printf("Enter stud details:\n");
    scanf("%d %s %f",&new->n,new->s,&new->marks);
    
    new->next=*hptr;
    *hptr=new;
}

void print(struct jo *temp)
{
    printf("Display stud details:\n");
   while(temp!=0)
   {
       printf("%d %s %f\n",temp->n,temp->s,temp->marks);
       temp=temp->next;
   }
}

void rev_print(struct jo* temp)
{
    if((temp->next)!=0)
    {
        rev_print(temp->next);
    }
    printf("%d %s %f\n",temp->n,temp->s,temp->marks);
}
