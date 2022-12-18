#include<stdio.h>
struct str
{
	int a;
	int b;
	char name[20];
};
union uni
{
	int x;
	int y;
	char name[20];
};
void main()
{
	struct str s;
	union uni u;
	printf("size of structure %d\n",sizeof(s));
	printf("size of union %d\n",sizeof(u));
	s.a=10;
	s.b=20;
	printf("%d %d\n",s.a,s.b);
	u.x=10;
	u.y=20;
	printf("%d %d\n",u.x,u.y);
}
