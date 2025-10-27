#include <stdio.h>
int main()
{
	int n,s;
	bobby:
		printf("enter a number");
		scanf("%d",&n);
		if(n<0)
		goto bobby;
		s=sqrt(n);
		printf("square root is=%d",s);
		return 0;
}
