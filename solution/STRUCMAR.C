/* to create structure marksheet
date:24/02/22*/
#include<stdio.h>
#include<conio.h>
struct marksheet
{
	int sid[5],m1[5],m2[5],m3[5],total[5];
	float per[5];
	char name[5][30];
};
void main()
{
	struct marksheet x;
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter student id:");
		sacnf("%d",&x.sid[i]);
		printf("\n Enter student name:");
		flushall();
		scanf("%s",&x.sname[i]);
		printf(