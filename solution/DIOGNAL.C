
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("-----------------------------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("-------------------------------------\n");
	if(a[0][0]>0&& a[1][1]>0 && a[2][2]>0)
	{
		if(a[i][j]<1)
		{
			printf("THE MATRIX IS DIAGONAL");
		}
		else
		{
			printf("THE MATRIX IS NOT DIAGONAL");
		}
		}
		getch();
	}

