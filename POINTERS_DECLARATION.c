#include <stdio.h>
int main()
{
	int a=10,*p;
	p=&a;
	printf("value of a=%d",a);
	printf("\n adress of a=%d",p);
	printf("\n adress of p=%d",&p);
	printf("\n value of p=%d",*p);
	return 0;
}
