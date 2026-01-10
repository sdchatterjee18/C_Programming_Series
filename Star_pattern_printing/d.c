#include<stdio.h>
int main()
{
    int i,j,r,s,t;
    int n=7;
    int mid=n/2+1;
    int mid1=n-mid;
    for(i=1;i<=mid;i++)
    {
        for(j=1;j<=mid-i;j++)
        {
            printf(" * ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" Q ");
        }
        printf("\n");
    }
    return 0;
}
