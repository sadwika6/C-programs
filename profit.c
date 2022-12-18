#include<stdio.h>
void main()
{
	int cp,sp,a,b;
	float c,d;
	printf("enter cp,sp values");
	scanf("%d%d",&cp,&sp);
	if(cp>sp)
	{
		printf("loss\n");
	}
	else if(sp>cp)
	{
		printf("profit\n");
	}
	else
	{
		printf("no profit no loss");
	}
	a=sp-cp;
	b=cp-sp;
	c=a*100/cp;
	d=b*100/cp;
	if(a>0)
	{
	printf("amount of profit is %d\n",a);
    }
    else if(a<0)
    {
    	printf("amount of loss is %d\n",b);
    }
    else
    {
    	printf("no profit no loss\n");
	}
	if(a<0)
	{
		printf("loss percentage is %f",d);
	}
	else 
	{
		printf("profit percentage is %f",c);
	}
}
