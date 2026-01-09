#include<stdio.h>
int main()
{
    int arr1[5][5],arr2[5][5],arr3[5][5];
    int r1,c1;
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
    printf("Enter the elements of second array :\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("Enter element at [%d][%d] position :",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("----The__first__matrix----\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("----The__second__matrix----\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("The addition of two matrix is : \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}