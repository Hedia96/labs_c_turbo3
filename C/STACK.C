#include<stdio.h>
//TASK:
// var in struct and same variable in main any wrong something happen
typedef struct stack
{
	int* stack_ptr;
	int Top_of_stack;
	int size;
}Stack;
int InitStack(Stack*,int);
void Destroy(Stack* sp)
{
		free(sp->stack_ptr);
		sp->Top_of_stack=0;
		sp->size=0;
}

int IsEmpty(Stack S)
{
	return(S.Top_of_stack==0);
}

int IsFull(Stack S)
{// don't forget the s. because it is a member in struct
return(S.Top_of_stack==S.size);
}


int Push(Stack* sp,int data)
{
	if(IsFull(*sp))//content of the pointer
	return 0;
	//else // is optional here
	sp->stack_ptr[sp->Top_of_stack]=data;
	(sp->Top_of_stack)++;
	return 1;
}
int Pop(Stack* sp,int* ptr_data)
{
	/* here this function return more one
	1-retrieve data from stack
	2-Flag
	*/if(IsEmpty(*sp))
		return 0;
	(sp->Top_of_stack)--;
	*ptr_data=sp->stack_ptr[sp->Top_of_stack];
	return 1;

}
void Display(Stack* sp)
{     int i;
	for(i=0;i<(sp->Top_of_stack);i++)
			{
			  printf("%d\n",sp->stack_ptr[i]);

			}

}
int  main(void)
{
	int size_stack;
	int ele_data;
	Stack S1;
	Stack* S1_ptr;
	int flag;
	char ch;
	int terminate=0;
	clrscr();
	printf("Enter The Size of Stack");
	scanf("%d",&size_stack);
	do{

	clrscr();
	printf("0-initialize Stack\n1-Push Data\n2-Pop Data\n3-Display whole Stack\n4-Exit\n");
	getch();
	flushall();
	ch=getch();

	switch(ch)
	{
		case'0'://initialize
			clrscr();
			flag=InitStack(S1_ptr,size_stack);
			if(flag)
			printf("Initialization is OKAY\n");
			else
			printf("FFFFFFFFail\n");
			getch();
			break;
		case'1'://push
			clrscr();
			printf("Enter the Data element\n");
			scanf("%d",&ele_data);
			clrscr();
			flag=Push(S1_ptr,ele_data);
			if(flag)
				printf("okay");
			else
				printf("fail push");
			getch();
			break;
		case'2'://pop
			clrscr();

			flag=Pop(S1_ptr,&ele_data);
			if(flag)
				printf("Retrieve Last Number is: %d\n",ele_data);
			
			else
				printf("FFFFFFFFFFFFFail POP/n");

			getch();
			break;
		case '3'://dispaly
			clrscr();
			printf("STACK is:\n");
			Display(S1_ptr);
			getch();
			break;
		case'4'://exit
		terminate=1;

	}

}while(terminate==0);

return 0;
}
int InitStack(Stack* sp,int size)
{
	sp->size=size;
	sp->Top_of_stack=0;

	//condition  on the pointer
	sp->stack_ptr=((int*)malloc(size*sizeof(int)));
	if(sp->stack_ptr!=NULL)
	return 1;
	 else
	 {
		return 0; 
	 }
	


}
