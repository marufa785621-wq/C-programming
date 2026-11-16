#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
};
int main()
{
	
	struct student s[5];
	int i;
	printf("enter details of 5 students:\n");
	for(i=0;i<5;i++)
	{
		printf("\n Enter name,roll number and marks of the student %d:\n",i+1);
		scanf("%s %d %f",&s[i].name,&s[i].roll,&s[i].marks);
	}
	printf("\n Student Details: \n");
	printf("\n Name: \n Roll: \n Marks: \n");
	for(i=0;i<5;i++)
	{
		printf("%s\t%d\t%f\n",s[i].name,s[i].roll,s[i].marks);
	}
	
	return 0;
}
