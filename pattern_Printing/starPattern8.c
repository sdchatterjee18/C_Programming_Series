#include<stdio.h>
int main()
{
    int row=7,i,j;
   for(i=1;i<=row;i++)
   {
    for ( j = 1; j <=i; j++)
    {
        printf("%d",j);
    }
    printf("\n");
    
   }
    return 0;
}