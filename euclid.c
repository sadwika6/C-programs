#include<stdio.h>
void main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);//12,18;18,12;12,6;
	while(b>0)//18>0,12>0,6>0
	{
		i=a%b;//12%18==12;18%12==6;12%6==0
		a=b;//a=18;a=12;a=6
		b=i;//b=12;b=6;b=0
	}
	printf("%d",a);
}
