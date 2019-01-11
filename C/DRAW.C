#include<stdio.h>
#include<conio.h>
void main (void)
{
	int d_x,d_y,r,c,n;
	clrscr();
	printf("enter the length\n");
	scanf("%d",&n);
	d_x=(80-(2*n))/(n+1);
	d_y=(25-n)/(n+1);

	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			gotoxy(	d_x*(c+1),(d_y*(r+1)));
			printf("|");
		}
		printf("\n");
	}
		for(c=0;c<n;c++)
		{
			for(r=0;r<n;r++)
			{
			gotoxy((d_x/2)+((d_x+2)*c),(d_y/2)+(d_y*r));
			printf("__");
			}
			printf("\n");
		}

	//gotoxy(100,10);
	//printf("yoyoooyoyyo");
	//printf("\n %d",n);
	getch();
}