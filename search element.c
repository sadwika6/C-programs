#include<stdio.h>
int main()
{
	int n,a[n],i,s,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			flag++;
			break;
		}
	}
	if(flag==1)
	{
		printf("element found");
	}
	else
	{
		printf("element not found");
	}
}
