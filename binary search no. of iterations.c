#include<stdio.h>
int l=0;
int search_element(int *arr,int search,int size)
{
	int m,h;
	static int c=1;
	h=size-1;
	m=(l+h)/2;
	if(l>h)
	{
		return -c;
	}
	if(arr[m]==search)
	{
		return c;
	}
	if(search>arr[m])
	{
		l=m+1;
	}
	else if(search<arr[m])
	{
		size=m;
	}
	c++;
	return search_element(arr,search,size);
}
int main()
{
	int size,arr[100],i,search,res;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&search);
	res=search_element(arr,search,size);
	if(res>0)
	{
		printf("%d True",res);
	}
	else
	{
		printf("%d False",-res);
	}
}
