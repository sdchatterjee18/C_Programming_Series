#include<stdio.h>
int main()
{
   //int a=50;
    {
        int a=20;
        {
           int a=10;
            printf("%d",a);
         }
         printf("%d",a);
    }
}