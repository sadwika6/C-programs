#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d %d",&i,&n);
	do
	{
		if(i%4==0)
		{
		printf("%d ",i);
	    }
	    i++;
	}while(i<=n);
}
