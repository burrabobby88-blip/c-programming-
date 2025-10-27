#include <stdio.h>
int main(){

int x=10,p,q,r,s;
p=++x;
printf("p=%d",p);
q=x--;
printf("q=%d",q);
r=x++;
printf("r=%d",r);
s=--x;
printf("s=%d",s);
printf("x=%d",x);
return 0;
}
