#include<stdio.h>
void main()
{
	int u;
	float a,s,t;
	printf("enter units consumed");
	scanf("%d",&u);
	if(u<200)
	{
		a=u*1.20;
		printf("units consumed:%d\n",u);
		printf("amount charged:%f\n",a);
	}
	else if(u>=200&&u<400)
	{
	    a=u*1.50;
		printf("units consumed:%d\n",u);
		printf("amount charged:%f\n",a);	
	}
	else if(u>=400&&u<600)
	{
		a=u*1.80;
		printf("units consumed:%d\n",u);
		printf("amount charged:%f\n",a);
	}
	else
	{
		a=u*2.00;
		printf("units consumed:%d\n",u);
		printf("amount charged:%f\n",a);
	}
	if(a>400)
	{
		s=15*a/100;
		t=s+a;
		printf("surcharged amount:%f\n",s);
		printf("net amount paid by customer:%f\n",t);
	}
	else
	{
		printf("net amount paid by the customer:%f\n",a);
	}
}
