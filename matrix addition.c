#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],C[10][10],r,c,i,j;
	printf("enter rows and column size");
	scanf("%d%d",&r,&c);
	printf("enter a matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter b matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=a[i][j]+b[i][j];
			}
}
printf("sum of matrix values\n");
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",C[i][j]);
		}
		printf(" \n");
	}
}
