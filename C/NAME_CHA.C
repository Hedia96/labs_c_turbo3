
#include<string.h>
#include<stdio.h>
#include<conio.h>
 void main(void)
{
char name[40];
int i=0;
char x;
clrscr();
x=getche();
	while(x!=13 && i<40)
	{
	name[i]=x;
	i++;
	x=getche();

	}
	for( ;i<40;i++)
	name[i]=0;
printf("displayyyyyyyyyyyyyyy:\n");
puts(name);
getch();
}