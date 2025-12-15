#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("hello world.c","r");
	if(fp==NULL)
	{
		printf("file doesnot exist");
		exit(0);
	}

ch=fgetc(fp);
while(ch!= EOF)
{ 
printf("%c",ch);
ch=fgetc(fp);
}
fclose(fp);
return 0;
}
