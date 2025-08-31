//C program to implement doubly linked list by add begin method using DMA
#include<stdio.h>
#include<stdlib.h>
struct jo
{
	struct jo *prev;
	int x;
	struct jo *next;
};

int main()
{
    char op;
	struct jo *hptr=0,*p,*temp;
	do
	{
		p=(struct jo*)malloc(sizeof(struct jo));

		printf("Enter data:\n");
		scanf("%d",&p->x);
		p->prev=0;
		p->next=0;
		
		if(hptr==0)
		{
	      hptr=p;
		}
		else
		{
		  hptr->prev=p;
		  p->next=hptr;
		  hptr=p;
		}

	printf("Do u want to add another node(y or no):\n");
	scanf(" %c",&op);
		
	}while(op=='y');
		
		printf("Display each node data:\n");
		
		while(hptr!=0)
		{
		    printf("%d ",hptr->x);
		    temp=hptr->next;
		    free(hptr);
		    hptr=temp;
		}
    
}
