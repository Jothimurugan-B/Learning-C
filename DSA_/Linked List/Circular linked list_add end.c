//C program to implement circular linked list by add end method and display it.
#include<stdio.h>
#include<stdlib.h>

struct jo
{
	int x;
	struct jo *next;
};

void add_end();
void display();

struct jo *hptr=0,*temp,*p,*temp2;

int main()
{
	char op;

	do
	{
		add_end();
		printf("Do you want to add another node(y/n):\n");
		scanf(" %c",&op);

	} while(op=='y');

	display();

}

void add_end()
{
	p=(struct jo*)malloc(sizeof(struct jo));
	printf("Enter data:\n");
	scanf("%d",&p->x);
	p->next=0;

	if(hptr==0)
	{
		hptr=temp=p;
		temp->next=temp;
	}
	else
	{
		temp->next=p;
		p->next=hptr;
		temp=p;
	}
}

void display()
{
	printf("Display each node data:\n");
	temp=hptr;
	do
	{
		printf("%d ",temp->x);
		temp=temp->next;
	} while(temp!=hptr);

}
