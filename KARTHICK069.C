#include <stdio.h>
int main(void) 
{
int n1,n2,diff;
printf("ENTER THE FIRST NUMBER :");
scanf("%d",&n1);
printf("ENTER THE SECOND NUMBER:");
scanf("%d",&n2);
diff=n1-n2;
if(diff%2==0)
{
printf("\n : EVEN :");
}
else
{
printf("\n : ODD :");
}
return 0;
}
