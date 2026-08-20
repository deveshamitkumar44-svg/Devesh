#include<stdio.h>
int main(){
int num1,num2;
int sum,diff,prod;
if (scanf("%d %d",&num1,&num2) !=2){
return 1;
}
sum = num1 + num2;
diff = num1 - num2;
prod = num1 * num2;
printf("Sum=%d,Diff=%d,product=%d,",sum,diff,prod);
if(num2 == 0){
printf("Quotient=undefined (divison by zero)\n");
} else {
int Quto = num1/num2;
printf("Quotient=%d\n",Quot);
}
return 0;
}

