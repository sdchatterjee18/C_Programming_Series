#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many terms you want :");
    scanf("%d",&n);
    int count=1,num=2,prime;
    while(count<=n)
    {
        prime=1;
        for(int i=2;i<num-1;i++)
        {
            if(num%i==0)
            {
                prime=0;
                break;//*

            }
        }
        if(prime==1)
        {
            printf("%d ",num*num);
            count++;//*
        }
        
        num++;
    }
    return 0;
}