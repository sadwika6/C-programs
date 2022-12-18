#include<stdio.h>
int main()
{
	int n,a,i,fc=0,j,c=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			fc++;
			break;
		}
    }
   while(n>0)
   {
       a=n%10;
       for(j=2;j<=a/2;j++)
       {
           if(a%i==0)
           {
               c++;
           }
       }
       n=n/10;
   }
   if(fc==0&&c==0)
   {
       printf("Mega Prime");
   }
   else
   {
       printf("Not Mega Prime");
   }
   return 0;
}    
