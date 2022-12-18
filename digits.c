#include<stdio.h>
void main()
{
	int a,r,b=0,c=0,d=0;
	scanf("%d",&a);
	while(a>0)
	{
		r=a%10;
		if(r==0)
		{
			d++;
		}
		else if(r%2==0)
		{
			b++;
		}
		else
		{
			c++;
		}
		a=a/10;
		
	}
	printf("even:%d\n",b);
	printf("odd:%d\n",c);
	printf("zeroes:%d\n",d);
}
