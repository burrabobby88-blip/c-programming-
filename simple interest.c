#include <stdio.h>
int main()
{
	int p,t,r,mul,si;
	printf("enter p,t,r values");
	scanf("%d%d%d",&p,&t,&r);
	mul=p*t*r;
	si=mul/100;
	printf("simple interest=%d",si);
	return 0;
}
