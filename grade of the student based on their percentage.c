#include <stdio.h>
int main()
{
	int per,a,b,c,d,total;
	printf("enter 3 subject marks");
	scanf("%d%d%d",&a,&b,&c);
	total=a+b+c;
	per=total/3;
	if(a>=40 && b>=40 && c>=40)
	{
		if(per>=90)
		printf("A grade");
		else if(per>=80)
		printf("B grade");
		else if (per>=70)
		printf("C grade");
		else if (per>=60)
		printf("D grade");
	}
	else 
	printf("fail");
	return 0;
}
