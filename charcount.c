#include<stdio.h>
int main()
{
	char str[1000],i=0,u=0,l=0,d=0,s=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			u++;
		}
		else if(str[i]>=97&&str[i]<=122)
		{
			l++;
		}
		else if(str[i]>=48&&str[i]<=57)
		{
			d++;
		}
		else
		{
			s++;
		}
	}
	printf("Uppercase letters:%d\nLowercaseletters:%d\nDigits:%d\nSpecial symbols:%d",u,l,d,s);
}
