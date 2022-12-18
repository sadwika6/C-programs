#include<stdio.h>
int main()
{
	char str1[1000],str2[1000];
	int flag,i=0,len1=0,len2=0;
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	for(i=0;str1[i]!='\0';i++)
	{
		len1++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		len2++;
	}
	i=0;
	if(len1==len2);
	{
		while(i<len1)
		{
			if(str1[i]==str2[i])
			{
				i++;
			}
			else
			{
				break;
			}
		}
		if(i==len1)
		{
			flag=1;
			printf("both strings are equal");
		}
}
   if(flag==0)
	{
		if(str1[i]>str2[i])
		{
			printf("string1 is bigger ");
		}
		else if(str2[i]>str1[i])
		{
			printf("string2 is bigger ");
		}
	}

	if(len1!=len2)
	{
		printf("both strings are not equal");
	}

	return 0;
}
