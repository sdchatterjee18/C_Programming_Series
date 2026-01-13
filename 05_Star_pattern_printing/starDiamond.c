#include<stdio.h>
int main()
{
    int n=15,i,j,s,t,r;
    int mid=n/2+1;
    int mid1=mid-1;
    for(i=1;i<=mid;i++)
    {
        for(j=1;j<mid-i+1;j++)
        {
            printf("   ");
        }
        for(s=1;s<=i;s++)
        {
            printf(" * ");
        }
        for(t=1;t<i;t++)
        {
            printf(" * ");
        }
        for(r=1;r<=mid1-i+1;r++)
        {
            printf("   ");
        }
        printf("\n");
    }
    for(i=1;i<=mid1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("   ");
        }
        for(t=1;t<=mid-i;t++)
        {
            printf(" * ");
        }
        for(s=1;s<=mid-i-1;s++)
        {
            printf(" * ");
        }
        for(r=1;r<=i;r++)
        {
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}