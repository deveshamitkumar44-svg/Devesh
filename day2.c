#include<stdio.h>
int main(){
int length,breadth;
int area,perimeter;
if (scanf("%d %d",&length,&breadth) == 2){
area = length*breadth;
perimeter = 2*(length+breadth);
printf("area=%d,perimeter=%d\n",area,perimeter);
}
return 0;
}
