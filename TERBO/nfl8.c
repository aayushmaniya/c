#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a=65;
	clrscr();
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=69;j++)
		{
			printf(" %c",a);
			a++;
		}
		printf("\n");
	}
	getch();
}
