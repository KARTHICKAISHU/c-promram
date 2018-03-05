#include <stdio.h>
 int main(void) 
{
	int a,k,pro;
	printf("enter the number1: ____________");
	scanf("%d",&a);
	printf("\nenter the number2:_____________");
	scanf("%d",&k);
	pro=a*k;
	if(pro%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
	return 0;
}
