#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0;
printf("\n enter the number");
scanf("%d",&a);
b=a;

while(b!=0)
{
c=b%10;
d=d*10+c;
a=a/10;
}
if(b==d)
printf("\n the given number is palindrome");
else
printf("\n the number is not a palindrome");
getch();
}
