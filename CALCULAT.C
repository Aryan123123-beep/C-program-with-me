#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add,sub,mul;
	float div;
	char opr;
	clrscr();
	printf("\n enter your choice");
	scanf("%c",&opr);
	switch(opr)
	{
		case '+':
		      printf("\n enter a");
		      scanf("%d",&a);
		      printf("\n enter b");
		      scanf("%d",&b);
			add=a+b;
			printf("\n addition is=%d",add);
			break;
		case '-':
			printf("\n enter a");
			scanf("%d",&a);
			printf("\n enter b");
			scanf("%d",&b);
			sub=a-b;
			printf("\n substraction is=%d",sub);
			break;
		case '*':
			printf("\n enter a");
			scanf("%d",&a);
			printf("\n enter b");
			scanf("%d",&b);
			mul=a*b;
			printf("\n multiplication is =%d",mul);
			break;
		case '/':
			printf("\n enter a");
			scanf("%d",&a);
			printf("\n enter b");
			scanf("%d",&b);
			if(a==0,b==0)
			{
				printf("\n division is not possible");
				}
			else
			{
				div=a/b;
				printf("\n division is=%f",div);
				}
		}
		getch();
	}
