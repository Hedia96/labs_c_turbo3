#include<stdio.h>
#include<conio.h>
void main(void)
{int number=0;
int sum=0;
clrscr();
while(sum<=100)
{printf("enter number");
scanf("%d",&number);
printf("%d",number);
sum+=number;
}
printf("the sum is %d",sum);
getch();

 }