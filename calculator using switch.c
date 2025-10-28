#include <stdio.h>
int main()
{
	int a,b;
	char ch;
	int result;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("enter your choice (+,-,*,/ ):");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':result=a+b;
		printf("result:%d+%d=%d\n",a,b,result);
		break;
		case '-':result=a-b;
		printf("subraction:%d-%d=%d\n",a,b,result);
		break;
		case '*': result=a*b;
		printf("mul:%d*%d=%d\n",a,b,result);
		break;
		case '/': result=a/b; 
		printf("division:%d/%d=%d\n",a,b,result);
		break;
	default : printf("invalid choice\n");
	}
	return 0;
}
