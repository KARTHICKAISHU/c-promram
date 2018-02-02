#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,num,num1,sum=0;
  printf("Enter the integers \n");
    scanf ("%d%d", &num,&num1);
  printf("\n");
    for(j=1;j<=num;j++)
    {
      printf("%d\t",j);
    }
 
    for (i = 1; i <= num1; i++)
    {
        sum = sum + i;
    }
    printf ("\nSum of %d number of the integers is = %d\n", num1, sum);
    getch();
    return 0;
}
