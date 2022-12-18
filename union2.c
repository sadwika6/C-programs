#include<stdio.h>
struct student
{
	int pin;
	float perc;
};
void main()
{
	struct student s1,*s2;
	s2=&s1;
	s2->pin = 123;
	s2->perc = 80.00;
	printf("%d %.2f",s2->pin,s2->perc);
}
