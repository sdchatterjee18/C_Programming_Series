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
            if(i==1||j==1||i==row||j==col||i==j||i+j==row+1||(row/2)+1==i||j==(col/2)+1)
            printf("*  ");
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}