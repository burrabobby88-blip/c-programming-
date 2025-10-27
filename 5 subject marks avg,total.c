#include <stdio.h>
int main()
{
	int a,b,c,d,e,sum;
	float avg;
	printf("enter a,b,c,d,e values");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	avg=sum/5;
	printf("total=%d",sum);
	printf("\naverage=%f",avg);
	return 0;
}
