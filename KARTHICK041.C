#include <stdio.h>
int main(void) 
{
	char s[50];
	int a,i;
	printf("\n enter the string:  ");
	scanf("%s",s);
	printf("\n enter the number:  ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("\n %s",s);
	}
	return 0;
}
