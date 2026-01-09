#include <stdio.h>

int main() {
    // Write C code here
int vegmomo=0,chickenmomo=0,pannermomo=0;
printf("-----MOMO STALL-----\n");
printf("       MENU         \n");
printf("1.Steam veg momo     Rs.40.00\n2.Steam chicken momo Rs.60.00\n3.Steam panner momo  Rs.60.00\n");
printf("Please select your choice:\n");
int choice;
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("Enter how many plate veg momo do you want?\n");
    scanf("%d",&vegmomo);
    break;
    case 2:
    printf("Enter how many plate chicken momo do you want?\n");
    scanf("%d",&chickenmomo);
    break;
    case 3:
    printf("Enter how many plate panner momo do you want?\n");
    scanf("%d",&pannermomo);
    break;
    default:
    printf("OOPS! wrong choice....\n");
    break;
}
printf("......Billing......\n");
printf("1.Steam veg momo (%d)     Rs.%d.00\n",vegmomo,vegmomo*40);
printf("1.Steam chicken momo (%d) Rs.%d.00\n", chickenmomo,chickenmomo*60);
printf("1.Steam panner momo (%d)  Rs.%d.00\n",pannermomo,pannermomo*60);
printf("----------------------------\n");
printf("Total                    Rs.%d.00\n",vegmomo*40+chickenmomo*60+pannermomo*60);
printf("............................\n");
printf("Thank you visit again...");
 return 0;
}