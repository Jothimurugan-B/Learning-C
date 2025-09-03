//C program to implement STACK using array method
#include<stdio.h>
#define max 3
int push();
int pop();
void display();

int top=0;
int a[max];

int main()
{
	int op;
	while(1)
	{
		printf("Enter option 1)push 2)pop 3)display:\n");
		scanf("%d",&op);

		switch(op)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		default:
			return 0;
		}
	}
}

int push()
{
    if(top==max)
    {
    printf("Stack overflow\n");
    return 0;
    }
    
	printf("Enter data:\n");
	scanf("%d",&a[top]);
	++top;
}

int pop()
{
    if(top==0)
    {
    printf("Stack empty\n");
    return 0;
    }
    --top;
     a[top]=0;
}

void display()
{
    int i;
  for(i=0;i<max;i++)
  printf("%d ",a[i]);
  printf("\n");
  
}

