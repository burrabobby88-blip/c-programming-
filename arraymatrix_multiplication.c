#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10][10],b[10][10],d[10][10],r1,c1,r2,c2,i,j,k;
	printf("enter a matrixs rows and columns");
	scanf("%d%d",&r1,&c1);
	printf("eneter b matrix rows and columns");
	scanf("%d%d",&r2,&c2);
	if(r1!=c2)
	{
		printf("matrix mul not posssible");
		exit(1);
	}
		printf("enter a matrix values");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter b matrix values");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			d[i][j]=0;
			for(k=0;k<r2;k++)
				d[i][j]=d[i][j]+a[i][k]*b[k][j];
		}
	}
	printf("resultant matrix is : \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d",d[i][j]);
		}
		printf("\n");
	}
	}
	
