#include<stdio.h>
int main()
{
    int i=2;
    switch(i)
    {
        case 1: 
           printf("ONE");
           break;
        case 2:
            printf("TWO\n");
        case 3:
            printf("THREE\n");
        default:
            printf("FOUR\n");   
    }    
    return 0;
}