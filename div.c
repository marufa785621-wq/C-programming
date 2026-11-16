#include<stdio.h>
int main()
{
	int a,b,c,d,e,avg=0,total=0;
	printf("Enter the marks of the 5 subjects:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	total=a+b+c+d+e;
	avg=total/5;
	printf("average=","%");
	
	if(avg>=80)
	printf("distinction");
	else if (avg>=65)
	printf("first division");
	
	else
	printf("2nd division");
	
	return 0;

}
