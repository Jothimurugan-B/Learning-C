//C program to find factorial of given number using recursion function
#include<stdio.h>
int factorial(int,int);
int main()
{
    int n,fact=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    
    fact=factorial(n,fact);
    printf("Factorial = %d",fact);
}

int factorial(int n,int fact)
{
    if(n!=0)
    {
    fact=fact*n;
    n--;
    return factorial(n,fact);
    }
    else
    return fact;
}
