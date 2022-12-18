#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,a1,b1,c1,ba,ch;
	scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&a1,&b1,&c1,&ba,&ch);
	ch=a*10+b*5+c*(-5);
	ba=a1*10+b1*5+c*(-5);
	printf("%d\n",ch);
	printf("%d\n",ba);
	if(ch>ba)
	{
		printf("chiru is best");
	}
	else
	{
		printf("balayya is best");
	}
	getch();
	return 0;
}
