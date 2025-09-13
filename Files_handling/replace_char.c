// Program to replace a character with another character in a file
#include<stdio.h>
int main()
{
	FILE *fp;
	int ch;
	char ele,rep;
	char s[30];
	printf("Enter file name:\n");
	scanf("%s",s);
	printf("Enter char to change:\n");
	scanf(" %c",&ele);
	printf("Enter char to replace:\n");
	scanf(" %c",&rep);

	fp=fopen(s,"r+");
	if (fp == NULL)
	{
		printf("Source file not found!\n");
		return 0;
	}

	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==ele)
		{
			fseek(fp,-1,1);
			fputc(rep,fp);
		}
	}
	fclose(fp);
	printf("File edited successfuly\n");
}

