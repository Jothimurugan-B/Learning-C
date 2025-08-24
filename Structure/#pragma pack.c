//C program to demonstrate structure using "#pragma pack()" for memory efficiency
//without pragma pack---> o/p=12
//by using pragma pack---> o/p=7 (memory saved)
#include<stdio.h>
#pragma pack(1) //minimum 1 byte will be allocated to each member
struct jo
{
  short int s;
  int n;
  char c;
}v;

int main()
{
    printf("%ld",sizeof v);
}
