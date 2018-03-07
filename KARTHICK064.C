#include <stdio.h>
int main(void) 
{
	int n,m,a;
	printf("\n ENTER THE NUMBER OF ELEMENT : ");

	scanf("%d %d",&n,&m);
	
	a=n+m;
	if(a%2==0)
	{
	printf("even");
	}
	else
	{
	printf("odd");
	}
	return 0;
}
