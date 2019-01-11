#include <stdio.h>
#define SQUARE(a) (a*a)
int main (void)
{int x=3;
float f=.01;
int main=3;
int a=3;
int b=++a + a++ + --a ;
clrscr();
printf("value of operation is %d \n",b);
printf("%d\n",SQUARE(x++));
if(f==.01)
printf("equal");
else
printf("not equal");
printf("\n");

printf("var has same name of function is OK:%d",main);
getch();
return 0;

}