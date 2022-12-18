#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	scanf("%[^\n]s",s1);
	scanf(" %[^\n]s",s2);
	int i,j,l=0;
	for(i=0;s1[i]!=0;i++)
	{
		l++;
	}
	j=l;
	for(i=0;s2[i]!=0;i++)
	{
		s1[j]=s2[i];
		j++;
	}
	s1[j]='\0';
	printf("%s",s1);
}
