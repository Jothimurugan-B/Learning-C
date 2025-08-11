//C Program to Reverse the Order of Words in a String
#include<stdio.h>
int main()
{
    char s[100],t;
    int i,j,k,temp,le;
    printf("enter a string:\n");
    scanf("%[^\n]",s);
    for(le=0;s[le];le++);
    for(i=0,j=le-1;i<=j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    
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
