#include<stdio.h>
int main()
{
    int n=11,i,j,s;
    int mid=n/2+1;
    int mid1=mid-1;
    for(i=1;i<=mid;i++)
    {
        for(s=1;s<=mid-i;s++)
        {
            printf("   ");
        }
        for(j=1;j<=mid-s+1;j++){
            printf(" * ");
        }
        printf("\n");
    }
    for(i=1;i<=mid1;i++)
    {
        for(s=1;s<=i;s++)
        {
            printf("   ");
        }
        for(j=1;j<=mid1-i+1;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}