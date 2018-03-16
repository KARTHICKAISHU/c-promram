#include <stdio.h>
int main(void) 
{
	int n1,n2,pro,i,flag=0;
	printf("\n:: enter : the : number::");
	scanf("%d %d",&n1,&n2);
	pro=n1*n2;
	for(i=1;i<=pro/2;i++)
	{
	if(i*i==pro)
	{
	flag=1;
	break;
	}
	}
	if(flag==1)
	{
	printf(":: yes ::");
	}
	else
	{
	printf(":: no ::");
	}
	return 0;
    }
