#include <stdio.h>
int main()
{
int a[100],n,i,low,high,mid,x;
printf("enter array size");
scanf("%d",&n);
printf("enter array values");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter search element");
scanf("%d",&x);
low=0;
high=n-1;
mid=(low+high)/2;
if(x==a[mid])
printf("search element is found");
else
printf("search element is not found");
}
