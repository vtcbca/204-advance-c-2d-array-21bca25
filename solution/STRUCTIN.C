/*wap to create structure inventory (id,name,quatity,rate) enter inventory deatails and print it
Date:24/02/2022*/
#include<stdio.h>
#include<conio.h>
struct inventory
{
	int id[3],qty[3],rate[3];
	char name[3][30];
};
void main()
{
	struct inventory x;
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n Enter id:");
		scanf("%d",&x.id[i]);
		printf("\n Enter item name:");
		scanf("%s",&x.name[i]);
		printf("\n Enter quantity:");
		scanf("%d",&x.qty[i]);
		printf("\n Enter rate:");
		scanf("%d",&x.rate[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("\n--------------------\n");
		printf("\n ID: %d",x.id[i]);
		printf("\n NAME: %s",x.name[i]);
		printf("\n QUANTITY: %d",x.qty[i]);
		printf("\n RATE: %d",x.rate[i]);
	}
	getch();
}