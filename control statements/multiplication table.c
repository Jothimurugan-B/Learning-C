#include <stdio.h>
int main()
{
  int n1,n2,i=1,p1,p2;
  printf("Enter a number:\n");
  scanf("%d %d",&n1,&n2);
  abc:
  p1=n1*i;
  p2=n2*i;
  printf("%d * %d =%d\t %d * %d = %d\n",n1,i,p1,n2,i,p2);
  i++;
  if(i<11)
  {
      goto abc;
  }
}
