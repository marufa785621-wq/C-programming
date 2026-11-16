#include<stdio.h>
int main()
{
	int number ,fact=1;
	int i;
	printf("Enter the number");
	scanf("%d",& number);
	for(i=1;i<=number;i++)
	fact=fact*i;
	printf("The factorial is:,%d",fact);
	
	return 0;
}
