#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int n,i,num,count=0;
	printf("\n ENTER THE NUMBERS : ");
	scanf("%s", &a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]=='0'||a[i]=='1')
	    {   
	        count++;
	    }
	    else
	    {
	       printf("NO @@@@  IT IS NOT A BINARY REPERSENTATION : ");
	       break;
	    }
	}
	if(n==count)
	{
	     printf("YES @@@@  IT IS A BINARY REPERSENTATION : ");
	}
	return 0;
}
