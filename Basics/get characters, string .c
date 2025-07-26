#include <stdio.h>
int main() 
{
    char ch,b,s[100],sen[100];
   
    scanf("%c",&ch);
    scanf("%s",s);
    scanf(" %[^\n]",sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}
    
    
   
   
