#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	strupr(str);
	printf("%s",str);
	return 0;
}
