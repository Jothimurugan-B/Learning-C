//C program to reverse a string using recursion function
#include<stdio.h>
char* reverse(char*,int,int);
int main()
{
    int i=0,j;
    char s[50],temp;
    printf("Enter the string:");
    scanf("%[^\n]",s);
    for(j=0;s[j];j++);
    reverse(s,i,j-1);
    printf("%s",s);
}

char* reverse(char *d,int i,int j)
{
    char temp;
    if(i<j)
    {
      temp=d[i];
      d[i]=d[j];
      d[j]=temp;
      i++;
      j--;
      return reverse(d,i,j);
    }
    else
    return d;
   
}
