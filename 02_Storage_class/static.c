#include<stdio.h>
int main()
{
    for(int i=0;i<4;i++)
    {
        static int n=1;
        printf("%d\n",n);
        n++; 
    }
    return 0;
}
