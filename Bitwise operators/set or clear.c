//C program to check given bit position is set or clear using bitwise.
#include<stdio.h>
int main()
{
    int n,msb,pos;
    printf("enter a num and pos:\n");
    scanf("%d %d",&n,&pos);
    (n>>pos)&1?puts("set"):puts("clear");
    
}
