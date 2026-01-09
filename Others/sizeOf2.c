#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    int a1,b2,c3;
    a1=sizeof(a);
    b2=sizeof(b);
    c3=sizeof(c);
    printf("size of integer :%d\n",a1);
    printf("size of float  :%d\n",b2);
     printf("size of char  :%d\n",c3);
     return 0;
}