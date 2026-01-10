#include <stdio.h>

int main() {
    int rows = 9; 
  int  mid=rows/2+1;
   int  mid1=mid-1;
    for (int i=1;i<=mid;i++) {
       for (int j=1;j<=i;j++)
        {
          printf(" *");
        }
         printf("\n");
    }
    for (int i=mid1;i>=1;i--) {
        for (int j=1;j<=i;j++)
        {
          printf(" *");
        }
        printf("\n");
    }
    return 0;
}
