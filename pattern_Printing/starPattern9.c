#include<stdio.h>
int main()
{
    int row=7,i,j;
   for(i=row;i>=1;i--)
   {
    for ( j = 1; j <=i; j++)
    {
        printf("%d",j);
    }
    printf("\n");
    
   }
    return 0;
}