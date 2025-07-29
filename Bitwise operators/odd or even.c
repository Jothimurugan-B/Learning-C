//C program to check given number is odd or even using bitwise operators.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a num:\n");
    scanf("%d",&n);
    n&1?puts("odd"):puts("even");
    
}
