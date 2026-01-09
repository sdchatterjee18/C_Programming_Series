#include<stdio.h>
int main()
{
    int  arr1[10],arr2[10],arr3[20];
    int n,j,t;
    printf("Enter how many elements for arr1 ?");
    scanf("%d",&n);
    printf("Enter the array elements :\n");
     //input array1
    for(int i=0;i<n;i++)
    {
        printf("Enter element at %d position :",i+1);
        scanf("%d",&arr1[i]);
    }
     printf("Enter how many elements for arr2 ?");
     scanf("%d",&j);
     printf("Enter the array elements :\n"); 
    for(int i=0;i<j;i++)
    {
         printf("Enter element at %d position :",i+1);
         scanf("%d",&arr2[i]);
    }
    printf("Array elements of arr1 : \n");
    for(int i=0;i<n;i++)
    {  
         printf("%d ",arr1[i]);
    }
    printf("\nArray elements of arr2 : \n");
    for(int i=0;i<j;i++)
    {
         printf("%d ",arr2[i]);
    }
    t=n+j;
    for(int i=0;i<=n;i++)
    {
         arr3[i]=arr1[i];
    }
    for(int i=0;i<j;i++)
    {
         arr3[n+i]=arr2[i];
    }
    printf("\nArray elements of arr3 : \n");
    for(int i=0;i<t;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}