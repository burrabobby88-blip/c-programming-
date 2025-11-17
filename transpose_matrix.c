#include <stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	printf("enter row and column size");
	scanf("%d%d",&r,&c);
	printf("enter 2d array values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n display 2d array values");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
}
