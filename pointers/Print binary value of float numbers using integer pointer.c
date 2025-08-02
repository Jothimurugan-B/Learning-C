#include<stdio.h>
int main()
{
    float f;
    int i,count=0;
    printf("enter a number:\n");
    scanf("%f",&f);
    unsigned int *p=(unsigned int *)&f;
    for(i=31;i>=0;i--)
    {
      printf("%d",(*p>>i)&1);
      ++count;
      if(count==4)
      {
       printf(" ");
       count=0;
      }
    }
  printf("\n");
     
}

