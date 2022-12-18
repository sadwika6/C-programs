#include<stdio.h>
int main()
{
	int s,j;
	float t;
	scanf("%d %d",&s,&j);
	if(j==3||4||5)
	{
		if(j==3)
		{
			t=s+0.15*s;
			printf("the total salary:%.2f",t);
			
		}
		else if(j==4)
		{
			t=s+0.07*s;
			printf("the total salary:%.2f",t);
		}
		else if(j==5)
		{
			t=s+0.05*s;
			printf("the total salary:%.2f",t);
		}
		
	}
	else
	{
		printf("invalid input");
	}
	return 0;
}
