// C Program to Store and Display n Strings using Dynamic Memory Allocation (malloc)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,l,i,j;
    char**p;
    printf("Enter number of strings and max length:\n");
    scanf("%d %d",&n,&l);
    
    p=(char**)malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
    p[i]=(char*)malloc(l*sizeof(char));
    
    printf("Enter %d strings:\n",n);
    
    for(i=0;i<n;i++)
    scanf("%s",p[i]);
    
    printf("\nDisplay strings:\n");
    
    for(i=0;i<n;i++)
    printf("%s ",p[i]);
    
    for(i=0;i<n;i++)
    free(p[i]);
    
    free(p);
}
