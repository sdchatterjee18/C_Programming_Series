#include<stdio.h>
int main()
{
   
    int s[7]={[2]=7,[4]=6,[6]=3};
    for(int i=0;i<7;i++)
    {
        printf(" %d ",s[i]);
    }
    return 0;
}