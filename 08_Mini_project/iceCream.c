#include<stdio.h>
int main()
{
    somu:
    printf("    ---Welcome to YummyCreaM---\n");
    printf("1.Vanilla\t|(RS:40)\n2.Strawberry\t|(RS:45)\n3.Chocolate\t|(RS:60)\n4.Mango  \t|(RS:50)\n5.Butterscotch\t|(RS:55)\n");
    printf("6.Blueberry\t|(RS:80)\n\n");
    printf("\t|Special offer !! \n\t|If you spend more than RS:200\n");
    printf("\t|You will get our special  **_BlueBerrY_**  just for RS:15\n");
    printf("\t___________________________________________________________\n");
    int choose;
   // float price;
    int V=0,S=0,C=0,M=0,BU=0,SP_BL=1,BL=0;
    int v,s,c,m,bu,bl;
    int v_price=40,s_price=45,c_price=60,m_price=50,bu_price=55,speacial_bl_price=15,bl_price=80;
    laval:
    printf("\nChoose your favourite one :");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:
             printf("How many vanilla do you want ? ->");
             scanf("%d",&v);
             V=V+v;
             break;
       case 2:
             printf("How many strawberry do you want ? ->");
             scanf("%d",&s);
             S=S+s;
             break;
        case 3:
             printf("How many chocolate do you want ? ->");
             scanf("%d",&c);
             C=C+c;
             break;
        case 4:
             printf("How many Mango do you want ? ->");
             scanf("%d",&m);
             M=M+m;
             break;
        case 5:
             printf("How many butterscotch do you want ? ->");
             scanf("%d",&bu);
             BU=BU+bu;
             break;
       case 6:
             printf("How many Blueberry do you want ? ->");
             scanf("%d",&bl);
             BL=BL+bl;
             break;

        default:
             printf("Sorry!! you choose wrong option..\nchoose again\n");   
             goto somu; 
             break; 
    }
    int again;
    printf("Do you want to buy again ??\n 1.YES 2. NO\n");
    scanf("%d",&again);
    switch(again)
    {
        case 1:
              goto laval;
              break;
    }
    float total_amount;
    total_amount=V*v_price+S*s_price+C*c_price+M*m_price+BU*bu_price+BL*bl_price;
    int choose2;
    if(total_amount>=200)
    {
       printf("\t\tCongratulatons!!!\n\t\tYou got our special offer of **_BlueBerrY_**\n\t\tjust for Rs: 15$\n");
       printf("Do you want to claim it ??1.YES 2.NO\n");
       scanf("%d",&choose2);
       switch(choose2)
     {
          case 1:
                printf("\t\tThank you !! for claiming this offer \n\t\tNow enjoy you **_BlueBerry_**\n");
                break;
          case 2:
               speacial_bl_price=0;
               SP_BL=0;
               break;
     }
    }
    else 
    {
        int choose3;
        printf("\tSorry! you have to spend more RS:%.2f \n\tto get our **_BlueBerry_** offer\n",(200-total_amount));
        printf("\tDo you want to spend more?? 1.YES 2.NO\n");
        scanf("%d",&choose3);
        switch(choose3)
        {
          case 1:
              goto laval;
              break;
          case 2:
               speacial_bl_price=0;
               SP_BL=0;
               break;    
                 
        }
    }
    printf("\n-----------------------------------------\n");
    printf("\t\tYummyCreaM\n");
    printf("-----------------------------------------\n");
    printf("Sl No.\tIcecream type\tQuantity  Amount\n");
    printf("-----------------------------------------\n");
    printf("1.    \tVanilla      \t  %d\t    %d\n",V,V*v_price);
    printf("2.    \tstrawberry   \t  %d\t    %d\n",S,S*s_price);
    printf("3.    \tChocolate    \t  %d\t    %d\n",C,C*c_price);
    printf("4.    \tMango        \t  %d\t    %d\n",M,M*m_price);
    printf("5.    \tButterscotch \t  %d\t    %d\n\n",BU,BU*bu_price);
    printf("6.    \tBlueberry    \t  %d\t    %d\n\n",BL,BL*bl_price);
    printf("      \tSpecial\n");
    printf("7.\t**_BlueBerry_**\t  %d\t     %d\n",BL,speacial_bl_price);

    printf("-----------------------------------------\n");
    printf("Total Amount:                       %.2f\n",(total_amount+speacial_bl_price)); 
    printf("-----------------------------------------\n");   
    printf("THANK YOU !! VISIT AGAIN\n");
    printf("-----------------------------------------\n");            
    return 0;
}