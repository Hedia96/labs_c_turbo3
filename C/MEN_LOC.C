#include<stdio.h>
#include<conio.h>
#define normal 0x07
#define highlight 0x70
#define esc  27
#define enter 13
#define down 80
#define up  72
#define home 71
#define end 79
void main(void)
{
	int i;
	char menu[3][8]={"new","display","exit"};
	int loc=0;
	int col=35;
	int row=10;
	char key;
	int terminator=0;

	// print menu with high light
	do{
	for(i=0;i<3;i++)
	{if (loc==i)
		textattr(highlight);
	gotoxy(col,row+2*i);
	cprintf("%s",menu[i]);
	textattr(normal);

	}

	//get the key from the user
	flushall();
	key=getch();
	// take an action depend on the key
	switch(key)
	{
		case(NULL):
		key=getch();// noflush
		switch(key)
		{
			case up:
			loc--;
			if(loc<0)
				loc=2;
			break;
			case down:
			loc++;
			if(loc>2)
				loc=0;
			break;
			case home:
			loc=0;
			break;
				case end:
			loc=2;
			break;
		}
			break;
		case enter:
		// see first where loc to do certain a action
		switch(loc)
		{
			case 0:
			clrscr();
			printf("\n new action done here\n press any key to continue\n");
			break;
			case 1:
			clrscr();
			printf("\n display here\n ");
			break;
			case 2:
			terminator=1;
			break;
		}
		
		break;
		case esc:
		terminator=1;
		
	}		
	
//getch();
	}while(terminator==0);// continuous   condition


}

 