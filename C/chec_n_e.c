#include<conio.h>
#include<string.h>
 void main (void )
 {
	 char ch;
	 flushall();
	 ch=getch();
	 if(ch!=Null)
	 printf("\n this  is normal key with code is : %d \n",ch);
	 else
	 {
		 // no flushall because i need the information after that 
		 ch=getch();
		 printf("\n this is extended key its 2nd byte code is %d ",ch);	 
	 }
	 
	 
 }