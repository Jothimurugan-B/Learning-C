// Program to move contents from one file to another
#include<stdio.h>
int main()
{
	FILE *fp,*fd;
	int ch;
	char s[30],d[30];

	printf("Enter source file name:");
	scanf("%s",s);
	printf("Enter destination file name:");
	scanf("%s",d);

	fp=fopen(s,"r");
	if (fp == NULL)
	{
		printf("Source file not found!\n");
		return 0;
	}
	fd=fopen(d,"w");

	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fd);
	}

	fclose(fd);
	fclose(fp);
	remove(s);
	printf("File moved successfully\n");
}
