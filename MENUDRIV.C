/*writ a menu driven program to mprform following task using udf and its diff
1.addition
2.subtraction
3.divison
4.modulus
5.exit*/

#include<stdio.h>
#include<conio.h>
void addition()
void subtraction(int,int);
void division()
void modulus(int,int)
int menu();
void main
{
	int c,x,y,div;
	char yn
	clrscr();
	do
	{
		c=menu
		switch(c)
		{
			case 1:
				addition()
				break;
			case 2:
				printf("\n Enter two values:");
				scanf("%d%d",&x,&y);
				subtraction(x,y);
				break;
			case 3:
				division();
				printf("\n division is %d:",div)
				break;
			case 4:
				printf("Enter two values:");
				sacnf("%d%d",&x,&y);
				div=modulus(x,y);
				printf("modulus of %d & %d is %d",x,y,div);
				break;
			case 5:
				exit(0);
			default:
				printf("invalid choice")
		}
		printf("\n\n\t do you want continue?(yes=y/Y,no=N/n)");
		flushall();
		scanf("%c",&yn);
	}
	while(yn=='y'||yn);
	getch();
}
int menu();
	int choice;
	printf("\n--------------------------------\n1.addition \n2.subtraction \n3.division \n4.modulus
	printf("Enter your choice:");
	scanf("%d",&c);
	return choice;
void addition()
{
	int x,y
	scanf("%d%d",&x&y);
	printf("\n addition of %d & %d",x,y,x+y);
}
void subtraction(int x,int y)
{
	printf("subtraction of %d & %d is &d",x,y,x-y);
}
int division()
{
	int x,y
	scanf("%d%d",&x,&y);
	return(x/y)
}
int modulus(int x,int y)
{
	return x/y;