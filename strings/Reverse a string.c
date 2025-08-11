//C program to get the string and print the reverse of string.
#include<stdio.h>
int main()
{
    char s[50],t;
    int i,j,le;
    printf("Enter the string: \n");
    scanf("%[^\n]",s);
    for(le=0;s[le];le++);
    
    printf("Before reverse: %s\n",s);
    
   for(i=0,j=le-1;i<j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
         
    }
    printf("After reverse: %s\n",s);
    
}
