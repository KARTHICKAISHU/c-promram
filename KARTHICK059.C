#include <stdio.h>
int main(void) 
{
int array[20];
int n,i,max=array[0];
printf("\n enter the number of elements :     ");
scanf("%d",&n);
printf("\n enter the array elements :           ");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
if(array[i]>max)
{
max=array[i];
}
}
printf("\n the maximum of the numbers is: %d",max);
return 0;
}
