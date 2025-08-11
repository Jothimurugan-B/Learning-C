//C program to count alphabets, numbers and special charcaters in given string
#include<stdio.h>
int main()
{
    char s[50];
    int i,alpha=0,num=0,spcl=0;
    
    printf("Enter the string: \n");
	scanf("%[^\n]",s);
    
    for(i=0;s[i];i++)
    {
        if(('a'<=s[i] && s[i]<='z' )|| ('A'<=s[i] && s[i]<='Z'))
        alpha++;
        
        else if('0'<=s[i] && s[i]<='9')
        num++;
        
        else
        spcl++;
    }
    printf("alphabets:%d\ndigits:%d\nspecial char:%d\n",alpha,num,spcl);
}
