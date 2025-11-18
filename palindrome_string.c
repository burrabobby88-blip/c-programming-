#include <stdio.h>
int main()
{
	char s[20];
	int i,j,l,flag=0;
	printf("enter string name");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++);
	l=i;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("the strirng is palindrome");
	else 
	printf("not a palindrome");
}
