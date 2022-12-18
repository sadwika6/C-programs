#include<stdio.h>
void change(int arr[])
{
	arr[0]=20;
}
void main()
{
	int arr[5]={12,23,34,45,56};
	printf("Before changes:%d\n",arr[0]);
	change(arr);
	printf("After changes:%d",arr[0]);
}
