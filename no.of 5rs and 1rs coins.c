#include<stdio.h>
int main()
{
	int a,b,n,f,i,j;
	scanf("%d %d %d",&a,&b,&n);
	f=b*5;
	if(f+a>=n)
	{
		i=n/5;
		j=n%5;
		printf("no. of 5rs coins:%d\nno. of 1rs coin:%d",i,j);
	}
	else
	{
		printf("-1");
	}
	return 0;
}
