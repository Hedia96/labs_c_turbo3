#include<conio.h>
#include <stdio.h>

struct integerpair{
  int x;
  int y;
};

typedef struct integerpair IntegerPair;

int Add(int A,int B);
int Subtract(int A,int B);
float Divide(int A,int B);
int Multiply(int A,int B);
void InitPairs(IntegerPair pairs[]);
void PrintPairs(IntegerPair pairs[]);


	void main(){

IntegerPair pairs[20];
int A, B, sum, diff, prod;
float ratio;
char ch;
 clrscr();
			 do{
			  printf("Enter two integer numbers, A & B: ");
			  fflush(stdin);
			  scanf("%d %d",&A,&B);

			  sum = Add(A,B);
			  diff = Subtract(A,B);
			  prod = Multiply(A,B);
			  ratio = Divide(A,B);

			  InitPairs(pairs);

			  PrintPairs(pairs);

			  fflush(stdout);
			  printf("The sum (A+B) is %d\n", sum);
			  printf("The difference (A-B) is %d\n", diff);
			  printf("The product (A*B) is %d\n", prod);
			  printf("The ratio (A/B) is %5.2f\n", ratio);

			  PrintPairs(pairs);


			  printf("Want to continue?[y/n]: ");
			  fflush(stdin);
			  scanf("%c", &ch);

			  printf("\n");

	  } while (ch == 'y' || ch == 'Y');
	}


int Add(int A, int B){

	  return A + B;

}
int Subtract(int A, int B){

	  return  A - B;

}

float Divide(int A, int B){

			 if( B != 0)
					return ((float)A)/B;
			 else
					return -999;

}

int Multiply(int A, int B){

	  return A * B;

}

void InitPairs(IntegerPair pairs[]){
int I;
	  for(I = 1; I <= 20; I++) {
			 pairs[I].x = I;
			 pairs[I].y = 20 - I;
	  }
}

void PrintPairs(IntegerPair pairs[]){
int I;
	  printf("\n");
	  for(I = 1; I <= 20; I++)
	  printf("%d  %d\n",pairs[I].x,pairs[I].y);
	  printf("\n");
	  printf("\n");
}
