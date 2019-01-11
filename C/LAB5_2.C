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
struct employee
{
	char name[50];
	int id;
       //	float bonus;
	int salary;
       //	float detduct;

};
struct employee add(void);
void display(struct employee);

void main(void)
{
	int i;
	char menu[4][20]={"new","display all","display by index","exit"};
	int loc=0;
	int col=35;
	int row=10;
	char key;
	int index;
	int terminator=0;
	struct employee arr_e[3];
	int check[3]={3,3,3};
	// print menu with high light
	do{   clrscr();
	for(i=0;i<4;i++)
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
				loc=3;
			break;
			case down:
			loc++;
			if(loc>3)
				loc=0;
			break;
			case home:
			loc=0;
			break;
				case end:
			loc=3;
			break;
		}
			break;
		case enter:
		// see first where loc to do certain a action
		switch(loc)
		{
			case 0:
			clrscr();
			printf("\n enter all elements\n ");
			for(i=0;i<3;i++)
			{

			arr_e[i]=add();
			check[i]=i;

			}
			break;
			case 1://display all
			clrscr();
			printf("\n display all elements\n ");
			for(i=0;i<3;i++)
			{
			display(arr_e[i]);
			}
			 getch();

			break;

			case 2://display_index
			clrscr();
			printf("enter the index \n");
			flushall();
			scanf("%d",&index);
			if(check[index]!=3)
			{
				display(arr_e[index]);
			}       getch();


			break;
			case 3:
			terminator=1;
			//break;
		}

		break;
		case esc:
		terminator=1;

	}

	}while(terminator==0);// continuous   condition


}
void display(struct employee e)

 {
printf("Name is %s\n",e.name);
//puts(e.name);
printf("the id is %d\n",e.id);
printf("the salary %d \n",e.salary);
 }
 struct employee add()
 {  struct employee e;
// float temp=0.0;
int temp;
   printf("enter name ");
   flushall();
   gets(e.name);
   printf("\n enter id\n");
   flushall();
   scanf("%d",&e.id);
   printf("enter salary\n");
   flushall();
   scanf("%d",&temp);
  e.salary=temp;

   return e;
 }
