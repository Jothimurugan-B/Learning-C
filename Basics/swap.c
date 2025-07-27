#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("enter two numbers:\n");
scanf("%d %d",&a,&b);
printf("before swap:\n");
printf("a=%d  b=%d\n",a,b);

temp=a;
a=b;
b=temp;

printf("after swap:\n");
printf("a=%d  b=%d\n",a,b);
}
