#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,div;
	clrscr();
	printf("\n enter a");
	scanf("%f",&a);
	printf("\n enter b");
	scanf("%f",&b);
	if(a==0,b==0)
	{
		printf("\n division is not posible");
		}
	else
	{
		div=a/b;
		printf("\n division =%f",div);
		}
	getch();
}