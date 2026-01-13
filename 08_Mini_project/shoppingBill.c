#include<stdio.h>
int main()
{
    float price[20];
    char item[10][20];
    float total_amount=0;
    int n,i;
    printf("____BAZAR KOLKATA____\n");
    printf("Enter No. of items : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d No. product name  : ",i+1);
        scanf("%s",&item[i]);
        printf("Enter %s's price : ",item[i]);
        scanf("%f",&price[i]);
    }
    for(i=0;i<n;i++)
    {
        total_amount=total_amount+price[i];
    }
    float pay_amount;
    float discount;
    int percent;
    if(total_amount>5000)
    {
        if(total_amount>10000)
        {
            if(total_amount>15000)
            {
                percent=10;
                discount=(total_amount*10)/100;
                pay_amount=total_amount-discount;
            }
            else{
                percent=15;
                discount=(total_amount*15)/100;
                pay_amount=total_amount-discount;
            }
        }
        else{
            percent=5;
            discount=(total_amount*5)/100;
            pay_amount=total_amount-discount;   
        }
    }
    else{
        percent=0;
        discount=0;
        pay_amount=total_amount;
    }
    printf("\n\n----SHOPPING BILL----\n");
    printf("ITEM NAME   \tITEM PRICE\n");
    for(i=0;i<n;i++)
    {
        printf("%s   \t%.2f\n",item[i],price[i]);
    }
    printf("-----------------------------\n");
    printf("Total amount : %.2f\n",total_amount);
    printf("-----------------------------\n");
    printf("Discount :%d %%\n",percent);
    printf("Total discount RS: %.2f",discount);
    printf("\n---------------------------\n");
    printf("Total payable amount : %.2f\n",pay_amount);
    printf("-----------------------------\n");
    printf("THANK YOU FOR SHOPPING WITH US !!\n Visit Again\n");
     printf("----------------------------");
    return 0;
}