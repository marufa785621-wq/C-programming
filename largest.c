#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three number:" );
	scanf("%d %d %d",&a,&b,&c);
	
	   	if(a>b && a>c)
		printf("largest:%d",a);
		
		else if(b>a && b>c);
		
		else
			printf("largest:%d",c);
			
			return 0;
		
}
