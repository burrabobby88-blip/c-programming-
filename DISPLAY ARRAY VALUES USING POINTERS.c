#include <stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int *p,i;
	p=a;
	printf(" Display aray values");
	for(i=0;i<5;i++)
	{
		printf(" %d",*p);
		p++;
	}
	return 0;
}
