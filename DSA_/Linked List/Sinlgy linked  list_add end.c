//C program to create a singly linked list by insertion at end and display it in forward and reverse order.
#include<stdio.h>
#include<stdlib.h>
struct jo
{
	int n;
	char s[20];
	float marks;
	struct jo *next;
};
void add_end(struct jo**);
void print(struct jo*);
void rev_print(struct jo*);

int  main()
{
	struct jo *head=0;
	char op;
	do
	{
		add_end(&head);
		printf("Do you want add another node(y or n):\n");
		scanf(" %c",&op);
	} while(op =='y');

	print(head);
	printf("Print stud details in reverse:\n");
	rev_print(head);
}

void add_end(struct jo**hptr)
{
	struct jo *new,*temp;
	new=(struct jo*)malloc(sizeof(struct jo));

	new->next=0;
	printf("Enter stud details:\n");
	scanf("%d %s %f",&new->n,new->s,&new->marks);

	if(*hptr==0)
		*hptr=new;

	else
	{
		temp = *hptr;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		  temp->next = new; 
	}
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
