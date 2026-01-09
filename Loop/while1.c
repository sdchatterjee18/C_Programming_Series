#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int i=1,k=1;
    int ti=i;
    int tk=k;
    printf("Enter how many pairs you want :");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d %d ",ti,tk);
        i++;
        k++;
        ti=pow((i),2);
        tk=pow((k),3);
        n--;
    }
    return 0;
}