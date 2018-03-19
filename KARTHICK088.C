#include <stdio.h>
int main(void) 
{
int x,y,remainder,lcm,gcd,a,b;
printf(" ::enter the 1 number::");
scanf("%d",&x);
printf(" ::enter the 2 number:");
scanf("%d",&y);
a=x;
b=y;
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}while(remainder!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("\n ::the lcm of the given number is:: %d",lcm);
return 0;
}
