#include <stdio.h>
int main()
{
	int i,n,s;
	printf("enter table number");
	scanf("%d",&n);
	printf("enter table size");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	return 0;
}

