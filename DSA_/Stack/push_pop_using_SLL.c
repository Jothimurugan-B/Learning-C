//C program to implement STACK using "singly linked list" method
#include <stdio.h>
#include <stdlib.h>

struct jo {
    int x;
    struct jo *next;
};

void push();
void pop();
void display();

struct jo *hptr = 0, *temp, *p;
int max,top = 0;

int main()
{
    int op;
    
    printf("Enter the maximum value of stack:");
    scanf("%d", &max);
    
    while (1)
    {
        printf("Enter 1)push 2)pop 3)display 4)exit:\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: display(); break;
        default: return 0;
        }
    }
}

void push()
{
    if (top == max)
    {
        printf("Stack overflow\n");
        return;
    }

    p = (struct jo*) malloc(sizeof(struct jo));
    printf("Enter data:\n");
    scanf("%d", &p->x);
    p->next = 0;

    if (hptr == 0)
    {
        hptr = temp = p;
    }
    else
    {
        temp->next = p;
        temp = p;
    }
    top++;
}

void pop()
{
    temp = hptr;
    if (temp == 0)
    {
        printf("Stack empty\n");
        return ;
    }
    
    if (hptr->next == 0)   // only one node present
    {
        free(hptr);
        hptr = 0;
        top--;
        return;
    }

    while ((temp->next)->next != 0)
        temp = temp->next;

    free(temp->next);
    temp->next = 0;
    top--;
}

void display()
{
    temp = hptr;
    while (temp != 0)
    {
        printf("%d ", temp->x);
        temp = temp->next;
    }
    printf("\n");
}
