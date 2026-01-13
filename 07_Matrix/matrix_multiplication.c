#include<stdio.h>
int main()
{
    int arr1[5][5],arr2[5][5],arr3[5][5];
    int r1,c1,r2,c2;
    int mul=0;
    printf("Enter the no. of rows of 1st matrix :\n");
    scanf("%d",&r1);
    printf("Enter the no. of columns of 1st matrix :\n");
    scanf("%d",&c1);
    printf("Enter the elements of first array :\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("Enter element at [%d][%d] position :",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    level:
    printf("Enter the no. of rows of 2nd matrix :\n");
    scanf("%d",&r2);
    printf("Enter the no. of columns of 2nd matrix :\n");
    scanf("%d",&c2);
    if(c1!=r2)
    {
        printf("****The number of columns of 1st matrix \n and the no. rows of 2nd matrix must be same****\n");
        goto level;
    }
    else
    {
    printf("Enter the elements of second array :\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("Enter element at [%d][%d] position :",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    }
    printf("The first matrix is : \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
           printf(" %d",arr1[i][j]);
        }
           printf("\n");
    }
    printf("The second matrix is : \n");
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf(" %d",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\nThe_multiplication_of_two_matrix_is : \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
           arr3[i][j]=0;
           for(int k=0;k<r2;k++)
           {
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
           }
        }
    }
    
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf(" %d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}