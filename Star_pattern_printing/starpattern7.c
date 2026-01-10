#include<stdio.h>
int main()
{
    int row=7,i,j;
    int k=1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k=!k;
        }
        printf("\n");
    }
    return 0;
}