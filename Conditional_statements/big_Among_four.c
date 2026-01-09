#include<stdio.h>
int main()
{
    int a,b,c,d,big;
    printf("Enter 1st number :");
    scanf("%d",&a);
     printf("Enter 2nd number :");
    scanf("%d",&b);
     printf("Enter 3rd number :");
    scanf("%d",&c);
     printf("Enter 4th number :");
    scanf("%d",&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                big=a;
            }
            else{
                big=d;
            }
        }
        else{
            if(c>d)
            {
                big=c;
            }
            else{
                big=d;
            }
        }
    }
    else{
        if(b>c)
        {
            if(b>d)
            {
                big=b;
            }
            else{
                big=d;
            }

        }
        else{
            if(c>d)
            {
                big=c;
            }
            else{
                big=d;
            }
            
        }
    }
    printf("The big number is :%d",big);

    return 0;
}