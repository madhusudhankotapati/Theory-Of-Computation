#include<stdio.h>
int main(){
int numerator,denominator,remainder,lcm,gcd,num1,num2;
printf("enter two integers:");
scanf("%d %d",&num1,&num2);
numerator=(num1>num2)?num1:num2;
denominator=(num1<num2)?num1:num2;
remainder=numerator%denominator;
while(remainder!=0){
numerator=denominator;
denominator=remainder;
remainder=numerator%denominator;
}
printf("GCD of %d=%d\n",num1,num2,gcd);
printf("LCM of %d=%d\n",num1,num2,lcm);
return 0;
}
