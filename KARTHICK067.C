#include <stdio.h>
int main(void) 
{
	int num;
	printf("ENTER THE NUMBERS : : :");
	scanf("%d",&num);
	num+=1;
	while(num%10!=0)
	{
	num=num+1;
	}
	printf("\n%d",num);
	return 0;
}
