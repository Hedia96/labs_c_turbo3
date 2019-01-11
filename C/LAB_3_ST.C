#include<stdio.h>
#include<conio.h>
#include<string.h>
void main (void)
{       int i;
	char sarr[3][9]={"new","display","exit"};
	for(i=0;i<3;i++)
		{
			gotoxy(80/2+strlen(sarr[i]),25/2+i);
			printf("%s",sarr[i]);
			printf("\n");
	       }
getch();
}