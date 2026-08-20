#include<stdio.h>
#include<math.h>
int main()
{
float p, r, t, si, ci;
scanf("%f %f %f",&p, &r, &t);
si = (p * r * t) / 100;
ci = p * pow(1+r/100, t) - p;
printf("simple interest=%.Of,compound interest=%.2f\n",si,ci);
return 0;
}
