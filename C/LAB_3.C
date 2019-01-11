#include<stdio.h>
#include<string.h>
#include<conio.h>
 void main(void)
{	 int i, min ,max;
	int array[5];
	printf("enter arrays");
	clrscr();
 for(i=0;i<5;i++)
	{
	scanf("%d",&array[i]);
	}
 for(i=0;i<5;i++)
	{
	printf("%d",array[i]);
	}
//getmax min
max=min=array[0];
for(i=0;i<5;i++)
	{if(array[i]<min)
	min=array[i];
	if(array[i]>max)
	max=array[i];

	}
printf("max is %d min is %d ",max,min);
getch();
}