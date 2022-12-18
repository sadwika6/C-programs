#include<stdio.h>
void swap(int *p,int *q)
{
  int t;
  t=*p;
  *p=*q;
  *q=t;
}
void main()
{
	int a=10,b=20;
	int *p,*q;
	p=&a;
	q=&b;
	printf("values of a and b before swap:%d %d\n",a,b);
	swap(p,q);
	printf("values of a and b after swap:%d %d",a,b);
}
