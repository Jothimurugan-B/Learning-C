#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three nums:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("a is greatest\n");
    else if(b>a && b>c)
    printf("b is greatest\n");
    else if(c>a && c>b)
    printf("c is greatest\n");
    else if(a==b && a>c)
    printf("a and b are equal and greatest\n");
    else if(b==c && b>a)
    printf("b and c are equal and greatest\n");
    else if(c==a && c>b)
    printf("c and a are equal and greatest\n");
    else
    printf("three are equal");
    
}
