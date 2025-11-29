#include <stdio.h>
void display();
int y=10;
int main()
{
	extern int y;
	printf("y=%d",y);
	display();
	return 0;
}
void display()
{
	extern int y;
	printf("\n y=%d",y);
}
