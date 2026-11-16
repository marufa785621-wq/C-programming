#include<stdio.h>
struct student
{
	int rollno;
	int age;
	char s_name[30];
	float marks;
};
int main()
{
	struct student s1;
	printf("enter student rollno:");
	scanf("%d",&s1.rollno);
	printf("enter the age of the student:");
	scanf("%d",&s1.age);
	printf("enter the name of the student: ");
	scanf("%s",&s1.s_name);
	printf("enter the student marks:");
	scanf("%f",&s1.marks);
	
	printf("Student details are");
	printf("\n Student roll no: %d",s1.rollno);
	printf("\n Student age: %d",s1.age);
	printf("\n Student studentname: %s",s1.s_name);
	printf("\n Student marks: %f",s1.marks);
	
	return 0;
 }
