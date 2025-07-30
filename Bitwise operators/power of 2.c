//C program to check if given number is power of 2 or not.
#include<stdio.h>
int main() 
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    if ((n&(n-1))== 0)
        printf("%d is power of 2\n", n);
    else
        printf("%d is not power of 2\n", n);

}
