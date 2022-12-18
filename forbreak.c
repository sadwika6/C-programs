#include<stdio.h>
void main()
{
	int i;
	for(i=1;;i++);
	{
		printf("%d",i);
		if(i==5)
		{
			break;
		}
	}
}
