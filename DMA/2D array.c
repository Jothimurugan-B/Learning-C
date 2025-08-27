// C Program to Create and Free a Dynamically Allocated 2D Array using malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,r,c;
	int** p;
	printf("Enter row and column:\n");
	scanf("%d %d",&r,&c);

	p=(int**)malloc(r*sizeof(int*));
	for(i=0; i<r; i++)
		p[i]=(int*)malloc(c*sizeof(int));

	printf("Enter elements of 2d array:\n");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			scanf("%d",&p[i][j]);
	}

	printf("Display elements of 2d array:\n");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			printf("%d ",p[i][j]);
			
			printf("\n");
	}
	
	for(i=0; i<r; i++)
	free(p[i]);
	
	free(p); //to avoid memory leak
	
	p=NULL; // to avoid dangling pointer
}
