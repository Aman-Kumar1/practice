#include<conio.h>
#include<stdio.h>
void main ()
{
	clrscr();
	int a,b,c;
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		c=b*a;
		c=++c;
		printf("the value of c \n %d",c);
	}
	else
	{
		c=a+b;
		c=--c;
		printf("the value of c \n %d",c);
	}
	}