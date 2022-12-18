#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,count1=0,sum1=0,count2=0,sum2=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count1++;
			sum1+=a[i];
		}
		else
		{
			count2++;
			sum2+=a[i];
		}
	}
	printf("even numbers count:%d\n",count1);
	printf("Odd numbers count:%d\n",count2);
	printf("odd numbers sum:%d\n",sum1);
	printf("Even numbers sum:%d",sum2);
	return 0;
}
