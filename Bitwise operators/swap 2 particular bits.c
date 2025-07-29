//c program to swap 2 particular given bit positions of given integer.
#include<stdio.h>
int main()
{
    int n,i,pos,pos1,pos2,msb;
    printf("enter a num:\n");
    scanf("%d",&n);
    msb=sizeof(n)*8-1;
    printf("before swap:");
    for(pos=msb;pos>=0;pos--)
    printf("%d",n>>pos&1);
    printf("\n");
    
    printf("enter positions:\n");
    scanf("%d %d",&pos1,&pos2);
    
    if((n>>pos1&1)!=(n>>pos2&1)) 
    {
        n=n^1<<pos1;
        n=n^1<<pos2; //these two lines swapping bits
    }
    printf("after swap:");
    for(pos=msb;pos>=0;pos--)
    printf("%d",n>>pos&1);
    
}
