//C program to check given number is positive or negative using bitwise operators.
#include<stdio.h>
int main()
{
    int n,msb;
    printf("enter a num:\n");
    scanf("%d",&n);
    msb = sizeof(n)*8-1;
    (n>>msb)&1?puts("negative"):puts("positive");
    
}
