#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("after swap: %d %d\n",a, b);
return 0;
}
