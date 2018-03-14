#include <stdio.h>
int main(void) 
{
char string[50];
int i=0,count=0,flag=0;
printf("\n :: ENTER THE STRING :: ");
scanf("%s",string);
while(string[i]!='\0')
{
if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
	printf("\n :: YES ::");
}
else
{
	printf("\n :: NO ::");
}
return 0;
}
