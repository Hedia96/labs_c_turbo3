#include<stdio.h>
#include<conio.h>
void main(void)
 { int n,row=0,col,i,d_x,d_y;
 int c,r;
// int x_bond,y_bond;
 clrscr();
 printf("enter order of magic box\n");
  scanf("%d",&n);
   d_x=(80-2*n)/n+1;
  d_y=(25-n)/n+1;
  col=n/2;

  if(n%2!=0)
  {
  // print boundries

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

  gotoxy((col+1)*d_x,(row+1)*d_y);
  printf("1");
  for(i=1;i<n*n;i++)
  { if(i%n!=0)
	 {	row--;
		 col--;
		if(row<0)
		row=n-1;
		if(col<0)
		col=n-1;
	 }
    else

	{

	 row++;
	 if(row>n-1)
	 row=0;
	 }
  gotoxy((col+1)*d_x,(row+1)*d_y);
  printf("%d",i+1);
  }
  }
  else
  printf("no!!enter odd number to get magic box\n");
  getch();

  }

