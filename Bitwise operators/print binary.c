//C program to print binary representation of a given number.
#include<stdio.h>
int main()
{
    int n,pos,msb,count=0;
    printf("enter a num:\n");
    scanf("%d",&n);
    msb=sizeof(n)*8-1;
    for(pos=msb;pos>=0;pos--)
    {
        ((n>>pos)&1)?printf("%d",1):printf("%d",0);
        
        count++;
        
        if(count==8)
        {
           printf(" ");
           count=0;
        }
        
    }
}
