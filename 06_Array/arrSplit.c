#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],arr3[10];
    int n,p;
    printf("Enter how many elements for arr1 ?");
    scanf("%d",&n);
    printf("Enter the array elements :\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter element at %d position :",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Array elements of arr1 : \n");
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nEnter the position to split :");
    scanf("%d",&p);
    for(int i=0;i<p;i++)
    {
        arr2[i]=arr1[i];
    }
    for(int i=0;i<n-p;i++)
    {
        arr3[i]=arr1[p+i];
    }
    printf("\nelements of first splitted array :");
    for(int i=0;i<p;i++)
    {
        printf("%d ",arr2[i]);
    }
     printf("\nelements of second splitted array :");
    for(int i=0;i<n-p;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}