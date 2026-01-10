#include <stdio.h>
int main()
 {
    int rows =6;
    int i, j;
    for(i=1;i<=rows;i++)
     {
        for(j=1;j<=rows;j++)
         {
            if(j<i)
                printf("  ");
            else
                printf(" *");
         }
        printf("\n");
     }
    return 0;
}