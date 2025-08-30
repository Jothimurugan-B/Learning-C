// C program to create a singly linked list by insertion at beginning and display it
#include<stdio.h>
#include<stdlib.h>
struct jo
{
	int x;
	struct jo *next;
};

int main()
{
	char op;
	struct jo *hptr=0,*temp,*p;

	do
	{
		p=(struct jo*)malloc(sizeof(struct jo));

		printf("Enter data:\n");
		scanf("%d",&p->x);

		if(hptr==0)
		{
			p->next=0;
			hptr=p;
		}
		else
		{
			p->next=hptr;
			hptr=p;
		}

		printf("Do you want to add another node(y or n):\n");
		scanf(" %c",&op);
	} while(op=='y');
	
	printf("Display each node data:\n");
	temp=hptr;
	while(temp!=0)
    {
        printf("%d ",temp->x);
        temp=temp->next;
    }
}
