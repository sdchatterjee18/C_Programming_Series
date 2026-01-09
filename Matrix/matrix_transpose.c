#include<stdio.h>
int main()
{
    int r1,c1,arr1[10][10];
    printf("Enter the number of rows and columns : \n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of first array :\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("Enter element at [%d][%d] position :",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("THE MATRIX IS : \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
           printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("THE TRANSPOSE MATRIX IS :\n");
    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r1;j++)
        {
           printf("%d\t",arr1[j][i]);
        }
        printf("\n");
    }
    return 0;
}