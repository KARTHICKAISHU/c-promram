#include<stdio.h>
#include<conio.h>
int main(void) 
{
char ch[100];
int i,k,count=0;
scanf("%[^\n]s",ch);
for(k=0;ch[k]!='\0';++k)
{
}
for(i=0;i<k;i++)
{
if(ch[i]==' ')
{
count++;
}
}
printf("%d",count);
return 0;
}
