#include <stdio.h>
int main()
{
	int x,y;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	switch(x>y)
	{
		case 1:printf("x is big");
		break;
		case 0:printf("y is big");
		break;
	}
	return 0;
}
