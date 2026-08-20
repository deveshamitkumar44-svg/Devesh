#include<stdio.h>
#define pi 3.14 
int main() {
float radius,area,circumference;
if (scanf("%f",&radius) == 1) {
area = pi * radius * radius;
circumference = 2 * pi * radius;
printf("area=%.2f,circumference=%.2f\n",area,circumference);
}
return 0;
}
