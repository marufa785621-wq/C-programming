#include<stdio.h>
#include<stdio.h>
int main()
{
	int a[10][10],n,i,j,row,col;
	printf("Enter the number of rows:");
	scanf("%d",&row);
	printf("enter the number of columns:");
	scanf("%d",&col);
	
	printf("enter the elements:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		scanf("%d",&a[i][j]);
	    }
    }
	printf("The elements are:\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
		printf("%d  ",a[i][j]);
	}		printf("  ");
	printf("\n");}
	
	    }


