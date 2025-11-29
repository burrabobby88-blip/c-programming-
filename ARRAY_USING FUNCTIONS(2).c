#include <stdio.h>
void display(int[]);
int main()
{
	int marks[5],i;
	printf("enter array values");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	display(marks);
	return 0;
}
void display(int a[5])
{
	int i;
	printf("display array values");
	for(i=0;i<5;i++)
	{
		printf(" %d",a[i]);
	}
}
