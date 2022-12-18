#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>=97&&ch<=122)//ch>='a'&&ch<='z'
	printf("Lowercase");
	else if(ch>=65&&ch<=90)//ch>='A'&&ch<='Z'
	printf("Uppercase");
}
