#include<stdio.h>
void main()
{
	int num;
	printf("enter a num");
	scanf("%d",&num);
	if(num%2!=0)
	{
		printf("weird");
	}
	else
	{
		if(num>=2&&num<=5)
		{
			printf("not weird");
		}
		else if(num>=6&&num<=20)
		{
			printf("weird");
		}
		else
		{
			printf("not weird");
		}
	}
}
