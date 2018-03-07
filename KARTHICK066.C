#include <stdio.h>
int main(void)
{
	int n,i;
	printf("\n ENTER THE NUMBERS : ");
	scanf("%d",&n);
	if(n==0)
	{
		printf("\n ENTER THE VALID NUMBERS :  ");
	}
	else if(n==1)
	{
		printf("1 IS NEITHER PRIME OR COMPOSITE : ");
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0 & n!=i)
			{
				printf("\n NOT A PRIME : ");
				break;
			}
			 if(n%i==0 & n==i)
			 {
			 	printf("\n ITS A PRIME : ");
			 }}}
	return 0;
}
