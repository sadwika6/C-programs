#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len;
	scanf("%[^\n]s",str);
	len=strlen(str);
	printf("%d",len);
	return 0;
}
