#include<stdio.h>
void main()
{
	int a,i,c=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	printf("count %d\n",c);
	if(c>2)
	{
		printf("Composite number");
	}
	else
	{
		printf("Prime number");
	}
	
}
