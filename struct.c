#include<stdio.h>
#include<string.h>
struct student
{
int pin;
char name[20];
int marks[5];
int total;
float perc;
char grade;
};
char set_grade(float p)
{
	if(p >= 90) return 'O';
	else if(p >= 80) return 'A';
	else if(p >= 70) return 'B';
	else if(p >= 60) return 'C';
	else if(p >= 50) return 'D';
	else return 'F';
}
void main()
{
	int n;
	printf("how many students data do you want to enter??:\n");
	scanf("%d",&n);
	struct student s[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("enter student pin \n",i+1);
		scanf("%d",&s[i].pin);
		printf("enter student name \n",i+1);
		scanf("%s",&s[i].name);
		printf("enter 5 subjects marks (out of 100) of students\n");
		s[i].total=0;
		for(j=0;j<5;j++)
		{
			scanf("%d",&s[i].marks[j]);
			s[i].total += s[i].marks[j];
		}
		s[i].perc = (float)s[i].total/5;
		s[i].grade = set_grade(s[i].perc);
	}
		printf("student details\n");
    printf("pin\t\tname\t\ttotal\t\tpercentage\t\tgrade\n");
    printf("-------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    printf("%d\t\t%s\t\t%d\t\t%.2f\t\t\t%c\n",s[i].pin,s[i].name,s[i].total,s[i].perc,s[i].grade);
}
