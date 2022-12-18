#include<stdio.h>
struct STD
{
	int a;
	char name[8];
	float c;
};
typedef struct STD S;
int main()
{
	S s1;
	printf("%d ",sizeof(s1));
}
