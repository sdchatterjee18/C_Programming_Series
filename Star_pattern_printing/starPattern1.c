#include<stdio.h>
int main ()
{
    int row,col,i,j;
    printf("Enter how many rows :");
    scanf("%d",&row);
    printf("Enter how many columns :");
    scanf("%d",&col);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i+j==6||i+j==4||i+j==8)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }   
        }
        printf("\n");
    }
    return 0;
}