#include<stdio.h>
int main()
{
    int n,pos,msb,op;
    printf("enter a num:\n");
    scanf("%d",&n);
    msb=sizeof(n)*8-1;
    
    for(pos=msb;pos>=0;pos--)
    printf("%d",n>>pos&1);
    printf("\n");
    
    printf("enter a  position:\n");
    scanf("%d",&pos);
    printf("enter a  operation:\n");
    scanf("%d",&op);
    
    switch(op)
    {
    case 1:n=n|1<<pos;break; //this line only setting given pos to 1.
    case 2 :n=n&~(1<<pos);break; //this line for clearing.
    case 3:n=n^(1<<pos);break; //this line for complement.
    default:printf("invalid operation\n");
    }
    printf("after operation:%d\n",n);
    
    for(pos=msb;pos>=0;pos--)
    printf("%d",n>>pos&1);
    printf("\n");
}
