#include<stdio.h>
int main()
{
    int n=7,i,j,s;
    int mid=n/2+1;
    int mid1=mid-1;
    for(i=1;i<=mid;i++)
    {
        int k=i;
        for(j=n-i+1;j>=1;j--)
        {
            printf("   ");
        }
        for(s=1;s<=k;s++){
            printf(" * ");
        }
        
        printf("\n");
    }
    for(i=1;i<=mid1;i++)
    {
        for(j=1;j<=mid+i;j++)
        {
            printf("   ");
        }
        for(s=1;s<=mid1-i+1;s++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}