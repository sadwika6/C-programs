#include<stdio.h>
int main()
{
	int rs,cs,i,j;
	scanf("%d %d",&rs,&cs);
	int a[rs][cs];
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			scanf("%d",&a[i][j]);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
