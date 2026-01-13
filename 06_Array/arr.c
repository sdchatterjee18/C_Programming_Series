#include<stdio.h>
int main()
{
    int ar[20]={57};//={[4]=9,[10]=10};
    ar[4]=9;
    ar[10]=10;
    for(int i=0;i<20;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}