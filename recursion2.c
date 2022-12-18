#include<stdio.h>
int fun(int n)
{
	if(n<=0)
	{
		return;
	}
	fun(n-1);
	printf("%d ",n);
	fun(n-2);
}
int main()
{
	int n,res;
	scanf("%d",&n);
	fun(n);
}
	
