#include<stdio.h>
#include<conio.h>
void main()
{
	int st=0,mt=0,lt=0;
	printf("...........Cha Stall..............\n");
	printf("    Menu    \n");
	printf("1.Small Tea   Rs.10.00\n2.Medium Tea  Rs.20.00\n3.Large Tea   Rs.40.00\n");
	printf("Please select your tea:");
	int Choice;
	scanf("%d",&Choice);
	switch(Choice)
	{
	case 1:
		//small
		printf("Enter how many Small tea do you want?");
		scanf("%d",&st);
		break;
	case 2:
		//medium
		printf("Enter how many Medium tea do you want?");
		scanf("%d",&mt);
		break;
	case 3:
		//Large
		printf("Enter how many Large tea do you want?");
		scanf("%d",&lt);
		break;
	default:
		printf("OOps! Wrong Choice........\n");
		break;
	}

	printf("\n.........Billing..........\n");
	printf("1.Small Tea   (%d)     Rs.%d.00\n",st,st*10);
	printf("2.Medium Tea  (%d)     Rs.%d.00\n",mt,mt*20);
	printf("3.Large Tea   (%d)     Rs.%d.00\n",lt,lt*40);
	printf("..................................\n");
	printf("    Total              Rs.%d.00\n",st*10+mt*20+lt*40);
	printf("..................................\n");
	printf("Thank you.......\n");
	getch();
}