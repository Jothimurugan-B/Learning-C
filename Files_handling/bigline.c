//C program to read a text file and  find total number of character, total number of lines, line number of the longest line and length of the longest line
#include<stdio.h>
int main()
{
        FILE *fp;
        char s[30],ch;
        int charc=0,bigline=0,biglen=0,count=0,line=0;
        printf("Enter file name:\n");
        scanf("%s",s);

        fp=fopen(s,"r");

        while((ch=fgetc(fp))!=EOF)
        {
                ++count;
                ++charc;
           if(ch=='\n')
           {
                ++line;

                if(count>biglen)
                {
                        bigline=line;
                        biglen=count;
                }
                count=0;

           }

        }
        printf("total char=%d \ntotal line=%d \nbigline=%d \nbig line length=%d \n",charc,line,bigline,biglen);
}

