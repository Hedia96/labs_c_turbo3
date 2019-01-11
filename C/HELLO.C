#include<stdio.h>
void main(void)
{int x;
printf("hello the world\n");
printf("enter the integer number");
scanf("%d",&x);
if((x%2)==0)
{
printf("x is even");
}
else
printf("x is odd");
getch();

}