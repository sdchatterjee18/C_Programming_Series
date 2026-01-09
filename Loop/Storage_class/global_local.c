#include<stdio.h>
int b=10;//variable declared outside of the scope is stored in the global storage class
//default value of b
int  main()
{
    int a=300;
    
       {
          int a=200;//when a variable is declared in the scope the 
                 {    //compiler autometically store it to the local storage class
               int a=100;
               printf("%d\n",a);
            }//when the scope is closed the local variable of the scopre release it's memory space
             printf("%d\n",a);
       }
       printf("%d\n",a); 
       printf("%d\n",b);
   return 0;
}