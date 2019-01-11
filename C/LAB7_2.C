#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

#define highlight 0x70
#define normal 0x07
//#define MAX_size 10
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
//char arr[MAX_size];
char * c_ptr;
int your_size;
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


////
textattr(normal);
clrscr();
printf("enter your size\n");
scanf("%d",&your_size);

c_ptr=(char *)malloc(your_size*sizeof(char));
Max_ptr=c_ptr+(your_size-1);
start_ptr=c_ptr;
current_ptr=start_ptr;
last_ptr=start_ptr;
////////////////////

clrscr();
for(i=0;i<your_size;i++)
{
		textattr(highlight);
		gotoxy(col+i,row) ;
			cprintf(" ");
}

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
				 *(last_ptr+1-i)=*(last_ptr-i);
			 //store before put a new item in current location
				gotoxy(col+j,row);
				printf("%c",key);
				*(current_ptr)=key;
					if(Max_ptr-last_ptr>=step)
					{ //handle printing on output screen
						///1 ,0=i
					 for(i=1;i<step;i++)
						{
							gotoxy(col+j+i,row);
							printf("%c",*(current_ptr+i));
						}
						//should j handle?here
					      ///abbout cursor
					      gotoxy(col+j,row);
					}

				 //gotoxy(col+j,row);// cursor still in its place;
				 last_ptr++;

			}
		     //  j++;
				 if(last_ptr>Max_ptr)
				terminator=1;


	}
		 else if(key==enter)
	 {
	  *(last_ptr)='\0';
	  gotoxy(col,row+2);
	  printf("display of array:%s",c_ptr);
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

		 }
	 else if(key==back)
	 {}
	 else
	 terminator=1;


	// printf("%d",step);

}
while(terminator==0);
//deallocation
free(c_ptr);
return 0;


}



