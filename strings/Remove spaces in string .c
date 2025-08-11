//C Program to Remove All Spaces from a String
#include<stdio.h>
int main()
{
    char s[100];
    int i,j;
   printf("enter strings:\n");
   scanf("%[^\n]",s);
    for(i=0;s[i];i++)
    {
        if(s[i] == ' ')
        {
           for(j=i;s[j];j++)
            s[j]=s[j+1];
            i--;
        }
    
    }
    printf("%s",s);
}
