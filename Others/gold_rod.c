#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,p;
    printf("Enter how many days you want to provide salary:");
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        if(pow(2,i)<=k)
        {
            n=i+1;
        }
    }
    int cuts=n-1;
    int parts=n;
    int min_len=pow(2,n)-1;
    printf("No. of cuts: %d",cuts);
    printf("\nNo. of parts: %d",parts);
    printf("\nMin length is :%d",min_len);
    printf("\nThe parts are :\n");
    for(int i=0;i<parts;i++)
    {
        p=pow(2,i);
        printf("%d\n",p);
    }
    return 0;
}