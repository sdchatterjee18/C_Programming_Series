#include<stdio.h>
int main()
{
    char a[]={"abc\0def"};
    int c=sizeof(a);
    printf("%s",a);
    printf("\n%d",c);
    return 0;
}