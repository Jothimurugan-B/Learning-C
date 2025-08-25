// C program to demonstrate Dynamic Memory Allocation using malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i;
    p=(int*)malloc(5*sizeof(int));
    
    if(p==NULL)
    {
        printf("DMA failed");
        return 0;
    }
    
    printf("Enter elements:\n");
    for(i=0;i<5;i++)
    scanf("%d",&p[i]);
    
    printf("\nDisplay elements:\n");
    for(i=0;i<5;i++)
    printf("%d ",p[i]);
    
    free(p);
}
