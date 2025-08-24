//C program to demonstrate Nested structure
#include<stdio.h>
struct st1
{
    int n;
    char ch;
    
    struct st2
    {
        char c;
        
        struct st3
        {
          float f;  
        }v3;
    }v2;
}v1={10,'a',{'b',{97.5}}};

int main()
{
    printf("%d %c %c %f",v1.n,v1.ch,v1.v2.c,v1.v2.v3.f);
}
