#include<stdio.h>
int a=10;
void k()
{
    int b=a;
    printf("%d",b);
}
int main()
{
   
    k();
     a=5;
    printf("%d",a);
    return 0;
}