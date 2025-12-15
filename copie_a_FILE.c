#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("hello world.c","r");
	if(fs==NULL)
	{
		printf("file does not exist ");
		exit(0);
	}
	ft=fopen("area of square.c","w");
	if(ft==NULL)
	{
		printf("unable to creat a file");
		exit(0);
	}
	ch=fgetc(fs);
	while(ch!=EOF)
	{
		fputc(ch,ft);
		ch=fgetc(fs);
	}
	fclose(fs);
	fclose(ft);
	printf("file succesfully copied");
}
