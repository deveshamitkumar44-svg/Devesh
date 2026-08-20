#include<stdio.h>
#include<math.h>
int main() {
float a = 1,b = -3,c = 2;
float d, r1, r2;
d = b*b - 4*a*c;
if (d > 0) {
r1 = (-b + sqrt(d)) / (2*a);
r2 = (-b - sqrt(d)) / (2*a);
printf("roots are real and different: %.of, %.of",r1,r2);
}
else if (d == 0) {
r1 = -b / (2*a);
printf("roots are real and same: %.of",r1);
}
return 0;
}
