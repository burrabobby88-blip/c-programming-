#include <stdio.h>
int main()
{
int a,b,c,d,e,total;
float avg;
printf("enter a,b,c,d,e values");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
avg=total/5;
printf("total=%d",total);
printf("\n average=%f",avg);
return 0;
}

