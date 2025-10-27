#include <stdio.h>
int main()
{
	int units;
	float amount,charge,total;
	printf("no.of units");
	scanf("%d",&units);
	if(units<=100)
	{
	amount=units*1.50;
	charge=25;
	}
	else if(units<=200)
	{
		amount=units*2.5;
		charge=50;
	}
	else if(units<=300)
	{
		amount=units*3.50;
		charge=75;
	}
	else if(units<=400)
	{
		amount=units*4.50;
		charge=100;
	}
	else 
	amount=units*5;
	charge=150;
total = amount + charge;
printf("electricity bill=%.2f",total);
return 0;
}
