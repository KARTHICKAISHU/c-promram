#include <stdio.h>
#include<string.h>
int main(void) 
{
	int i,k;
	scanf("%d %d",&i,&k);
	i=i^k;
	k=i^k;
	i=i^k;
	printf("%d %d",i,k);
	getch();
	return 0;
}
