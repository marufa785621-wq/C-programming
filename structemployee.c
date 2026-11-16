#include<stdio.h>
struct_employee 
{
	int emp_id;
	char emp_name[20];
	float salary;
 };
int main()
{
	int i;
	struct employee emp[5];
	printf("Enter employee details");
	for(i=0;i<5;i++)
	{
		printf("\n Enter employee id");
		scanf("%d",&emp[i].emp_id);
		
		printf("\n Enter employee name");
		scanf("%s",&emp[i].emp_name);
		
		printf("\n Enter employee salary");
		scanf("%s",&emp[i].emp_salary);
		
		}
		printf("Details are");
		for(i=0;i<5;i++)
		{
			printf("employee id %d",emp[i].emp_id);
			
			printf("employee name %d",emp[i].emp_name);
			
			printf("employee salary %d",emp[i].emp_salary);
			
			
		}
		return 0;
}

