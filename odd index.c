#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("odd index elements:");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
