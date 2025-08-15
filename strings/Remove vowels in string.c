//C program to remove the vowels in a string 
#include<stdio.h>
int main()
{
    char s[50];
    int i,j;
    
    printf("Enter the string:\n");
    scanf("%[^\n]",s);
    
    for(i=0;s[i];i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||
                  s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
            for(j=i;s[j];j++)
            s[j]=s[j+1];
            --i;
        }
        
    }
    printf("%s",s);
}
