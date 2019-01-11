#include<stdio.h>

#define normal 0x07
#define highlight 0x70
#define esc 27
#define enter 13
#define home 71
#define end  79
#define up   72
#define down 80
#define right 77
#define left 75
#define bs 8
#define del 83
void main (void)
{
	char menu[30];
	int temp;
	char key;


	int row=10;
	int col=20;
	int lastp=20;

	int i=0;
	int terminate =0;


	textattr(normal);
	clrscr();



		for (i=0; i<31 ; i++)
	   {

		gotoxy(col+i,row);
		textattr(highlight);
		cprintf(" ");

		textattr(normal);
		}
	   gotoxy(col,row);



 while (terminate ==0)
  {
	flushall();
	key=getch();

	switch (key)
	{

	   case 0 :
	   key= getch();
	   switch(key)
		{
			case home:
			gotoxy(20,10);
			break;

			case end:
			gotoxy(50,10);
			break;


			case right:
			col++;
			if(col>50)
			col=20;
			gotoxy(col,10);
			break;

			case left:
			col--;
			if(col<20)
			col=50;
			gotoxy(col,10);
			break;

			case del:
			menu[(col-20)]=' ';
			textattr(0x70);
			gotoxy(col,row);
			cprintf("%c",menu[(col-20)]);
			gotoxy(col,row);
			col++;



		}
	   break;


	   case enter:
	   menu[lastp-20] = '\0';
	   textattr(07);
	   clrscr();
	   cprintf("%s",menu);
	   break;

		case bs:

		menu[col-21]=' ';
		textattr(0x70);
		gotoxy(col-1,row);
		cprintf("%c",menu[col-20]);
		gotoxy(col-1,row);
		col--;


		break;


	   case esc:
	   terminate=1;
	   break;

	  default:
	  if(col==lastp)
	  {
	   if(isprint(key))
		{
		 menu[col-20]=key;
		 textattr(0x70);
		 cprintf("%c",menu[col-20]);
		 if(col<50)
		  {
			col++;
			lastp++;
		   }
		 //else if col>50
		 else
		 {
		   lastp=50;
		   col=0;
		 }

	   }// end of if (isprint(key))
	  }  //end of if(col==lastp)

	  else  // else if col!=lasp
	  {
		if(isprint(key))
		{
		   temp=lastp;
		   i=lastp-20;
	   while(temp>col)
			{
			 menu[i]=menu[i-1];
			 temp--;

			  gotoxy(col,row);
			 textattr(0x70);
		  // cprintf("%s",menu[col-20]);
			 i--;
			}
		   menu[col-20]=key;
		   gotoxy(20,row);
		   textattr(0x70);
		   menu[lastp-19]='\0';
		   cprintf("%s",menu);

		   lastp++; //3lshan lama ndos enter
		   gotoxy(col,row);

		 if((lastp>col) && (lastp<50))
		  {
		   col++;
		   lastp++;
		  }

		 }
	   }



	}
   }

	getch();
}