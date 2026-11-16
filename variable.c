#include<stdio.h>
int main()
{
	int a=5,b=10,c=15;
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	
	return 0;
	
}

