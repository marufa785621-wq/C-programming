#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("How many elements you want to enter:");
	scanf("%d",&n);
	printf("enter the elements:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
	printf("The elements are:");
		for(i=0;i<n;i++)
		{
		printf("%d",a[i]);
		printf("  ");
	    }
		return 0;
}
