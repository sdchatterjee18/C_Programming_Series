#include<stdio.h>
int main()
{
    int row=5,i,j;
    int k=row;
    for(i=1;i<=row;i++)
    {
        for(j=k;j>=1;j--)
        {
            printf(" *");
            
        }
        k--;
        printf("\n");
    }
    return 0;
}