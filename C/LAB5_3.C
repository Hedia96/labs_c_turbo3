#include<stdio.h>
double power(int ,int);
int main(void)
{// recursion power
int b;
int e;

clrscr();
printf("enter base then expo\n");
scanf("%d",&b);
scanf("%d",&e);
printf("the result is %lf",power(b,e));
getch();
return 0;
}
double power(int base,int exp)
{
 if(exp>0)
   {
    return (base*power(base,exp-1));

   }
else if(exp==0)
	 return 1;
else
return(1/power(base,-exp));
//because the default is signed int when i say -2 as input and manipulate minus mins is positive
//return();
 }