#include<stdio.h>
int main()
{
    // int a=5,b=9;
    // int big;
    // big=(a>b)?a:b;
    // printf("The big No. is : %d",big);

    int a=10,b=20,c=70;
    int big;
    big=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("big= %d",big);
    return 0;
}