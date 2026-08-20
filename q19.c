#include<stdio.h>
int main() {
int a = 3,b = 3, c = 3;
if (a == b && b == c)
printf("equilateral");
else if (a == b || b == c || a== c)
printf("isosceles");
else
printf("scalene");
return 0;
}
