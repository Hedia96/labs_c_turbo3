	#include <stdlib.h>
#include <conio.h>

void main(void){
	int dx,dy,n=3,row=0,col=0,i=0,j=0;
	row=0;
	col=n/2;
	printf("enter odd num ");
	scanf("%d",&n);
	dx = (80-2*n)/(n+1);
	dy = (25-2*n)/(n+1);
	gotoxy((col+1)*dx,(row+1)*dy);

	printf("1");

	for(i=1;i<n*n;i++){

		if(i%n !=0){
			row--;
			col--;
			if(row<0) 	row=n-1;
			if(col<0)	col=n-1;


		}
		else{
			row++;
			if(row>n-1)	row=0;
		}

		gotoxy((col+1)*dx,(row+1)*dy);
		printf("%d",i+1);




	}
	gotoxy(dx/2,dy);
	printf("|");
	for(i=1;i<=n;i++){
		// drawing borders' cols
		gotoxy(dx/2,dy*i);
		printf("|");
		gotoxy(dx/2,dy*i+1);
		printf("|");
		// end of borders' cols
		// beginning of borders' rows
		gotoxy(dx/2,dy/2);
		printf("___________________________");
		gotoxy(dx*2,dy/2);
		printf("____________________________");
		// end of borders' rows

		for(j=1;j<=n;j++){
			// drawing inner cols
			gotoxy((dx/2)+(i*dx),j*dy);
			printf("|");
			gotoxy((dx/2)+(i*dx),j*dy+1);
			printf("|");
			///// end of inner cols
			//// start of inner rows
			gotoxy(dx/2,(dy/2)+dy*i);
			printf("____________________________");
			gotoxy(dx*2,(dy/2)+dy*i);
			printf("____________________________");
			/// end of inner rows
		}

	}

	getch();
	clrscr();








}