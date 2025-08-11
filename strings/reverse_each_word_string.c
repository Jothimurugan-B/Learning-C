//C Program to Reverse Each Word in a String
#include<stdio.h>
int main()
{
    char s[100],t;
    int i,j,k,temp;
    printf("enter a string:\n");
    scanf("%[^\n]",s);
    for(i=0;s[i];i++)
    {
        if(s[i]!=' ')
        {
            for(j=i;s[j]!=' ' && s[j]!=0;j++);
           temp=j-1;
            for(k=i,j=j-1;k<j;k++,j--)
            {
                t=s[k];
                s[k]=s[j];
                s[j]=t;
            }
           i=temp;
        }
    }
    printf("%s",s);
}
