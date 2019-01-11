#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

#define highlight 0x70
#define normal 0x07
#define MAX_size 10
#define down 80
#define up  72
#define left 75
#define right 77
#define home 71
#define end 79
#define enter 13
#define delt 83
//delete is extended
#define back 8
//back is normal

int main(void)
{
char arr[MAX_size];
int col=1;
int row=1;
char key;
int i;
int j=0;
int step=0;
int terminator=0;
////////////////////
char* start_ptr;
char* current_ptr;
char * last_ptr;
char* Max_ptr;
Max_ptr=&arr[MAX_size-1];
start_ptr=arr;
current_ptr=start_ptr;
last_ptr=start_ptr;
////////////////////
textattr(normal);
clrscr();
for(i=0;i<MAX_size;i++)
{
		textattr(highlight);
		gotoxy(col+i,row) ;
			cprintf(" ");
}
 // flushall();
do
{   flushall();
		key=getch();
	//printable
		if(isprint(key))
	{      /*
		gotoxy(col+j,row);
		printf("%c",key);
		*(current_ptr)=key;
		 */
		//current_ptr++;
			if(current_ptr==last_ptr)
			{	gotoxy(col+j,row);
				printf("%c",key);
				*(current_ptr)=key;
			       ///edit here
				j++;

			current_ptr++;
			last_ptr++;
			}
		//to handle shift writing instead of replacment
			else if(last_ptr>current_ptr)
			{
				step=last_ptr-current_ptr+1;
				 for(i=0;i<step;i++)
				 {
				 *(last_ptr+1-i)=*(last_ptr-i);
				 }
				last_ptr++;
				*(last_ptr)='\0';
				*(current_ptr)=key;
				  gotoxy(col,row);
				  printf("%s",arr);

			}
		     //  j++;
				 if(last_ptr>Max_ptr||Max_ptr-last_ptr<step)
				terminator=1;


	}
		 else if(key==enter)
	 {
	  *(last_ptr)='\0';
	  gotoxy(col,row+2);
	  printf("display of array:%s",arr);
	  getch();
	  terminator=1;
	 }
	 else if(key==NULL)
	 { //one left
		key=getch();
		if(key==left&&current_ptr>start_ptr)
		{
		current_ptr--;//stepback
		j--;
		gotoxy(col+j,row);
		}
	    //	 arr[j]=
		else if(key==right&&current_ptr<last_ptr)
		{
		current_ptr++; //step forward
		j++;
		gotoxy(col+j,row);
		}
		else if(key==delt)
		{       step=last_ptr-current_ptr-1;
			 for(i=0;i<step;i++)
			 *(current_ptr+j)=*(current_ptr+j+1);
			 last_ptr--;

		}
		else if(key==delt)
		{
		}

		 }
	 else if(key==back)
	 {}
	 else
	 terminator=1;


	// printf("%d",step);

}
	while(terminator==0);
getch();
return 0;


}



