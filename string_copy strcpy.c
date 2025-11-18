#include <stdio.h>
int main()
{
	char s1[20],s2[20];
	int l;
	printf("enter string1 name");
	scanf("%s",&s1);
	strcpy(s2,s1);
	printf("original string =%s",s1);
	printf("\n copies string = %s",s2);
}
