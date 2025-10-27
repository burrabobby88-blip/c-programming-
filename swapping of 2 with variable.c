#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
    printf("before swap a=%d,b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n after swap a=%d,b=%d",a,b);
    return 0;
}
