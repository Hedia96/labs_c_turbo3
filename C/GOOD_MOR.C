#include<stdio.h>
#include<conio.h>

void main(void)
{   char index;
       clrscr();																														rintf("1-good morning\n2-good after noon\n3-bye\n");
	do{
	    printf("1-good morning \n2-good afre\n3-bye\n");
		scanf("%c",&index);
		switch(index)
		{
		case'1': clrscr();
			printf("good morning\n");
			getch();
			break;
		case'2': clrscr();
			printf("good afternoon\n");
			break;
		case'3':clrscr();
		       printf("bye\n");
	       //	case 27:
		 }

	  }
	       while(index=='3' ||index==27);

}