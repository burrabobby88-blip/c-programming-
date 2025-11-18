#include <stdio.h>
int main()
{
	char s1[20],s2[20];
	printf("enter string1 name");
	scanf("%s",&s1);
	printf("enter string2 name");
	scanf("%s",&s2);
	strcat(s1,s2);
	printf("new string =%s",s1);
}
