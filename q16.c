#include<stdio.h>
int main() {
int a = 3,b = 7,c = 5;
int largest;
if (a >= b && a >= c)
largest = a;
else if (b >= a && b >= c)
largest = b;
else 
largest = c;
printf("largest is %d",largest);
return 0;
}
