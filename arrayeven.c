#include<stdio.h>
int main()
{
	int a,count=0;
	scanf("%d",&a);
	int num[a],i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]%2==0)
		{
			count++;
		}
	}
	printf("%d",count);
}
