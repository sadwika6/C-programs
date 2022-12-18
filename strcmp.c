#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	int s;
	scanf("%[^\n]s",s1);
	scanf(" %[^\n]s",s2);
	s=strcmp(s1,s2);
	printf("%d",s);
}
