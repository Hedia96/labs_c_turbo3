#include<stdio.h>
#include<conio.h>
typedef struct que
{
	int* queue_ptr;
	int size;
	int index;
}Queue;
int initQueue(Queue* qp,int size)
{       qp->queue_ptr=(int*)malloc(size* sizeof(int));
	if(qp->queue_ptr==NULL)
	{
		qp->size=0;
		qp->index=0;
		return 0;

	}else
	{
		qp->size=size;
		qp->index=0;
		return 1;

	}
}
 void destroy(Queue* qp)
 {
	 if(qp->size!=0)
	 {
		 free(qp->queue_ptr);

	 }// to avoid free after free

	 qp->size=qp->index=0;

 }
 int IsEmptyQ(Queue Q)
 {
	return(Q.size==0);
 }
 int IsFullQ(Queue Q)
 {
	 return (Q.index==Q.size);
 }
 int InputQ(Queue* qp,int data)
 {
	 if(IsFullQ(*qp))
	 {
		 return 0;
	 }
	 printf("heeeeeeeeeeeeeeeeeeeeeee");
	/* avoid using else
	{
		to return  should be inside function not sub  brackets
	}

	*/
		 qp->queue_ptr[qp->index]=data;
		 (qp->index)++;
		 return 1;


 }
 int OutputQ(Queue* qp,int* ptr_data)
 {	int i;
	 if(IsEmptyQ(*qp))
		 return 0;
	 *ptr_data=qp->queue_ptr[0];// first element in queue_ptr
	for(i=0;i<(qp->index)-1;i++)
	{
		qp->queue_ptr[i]=qp->queue_ptr[i+1];
	}
	(qp->index)--;

	return 1;
 }
 void Display(Queue* qp)
{     int i;
	for(i=0;i<(qp->index);i++)
			{
			  printf("%d\n",qp->queue_ptr[i]);

			}

}

int  main(void)
{
	int size_que;
	int ele_data;
	Queue* Q1_ptr;
	int flag;
	char ch;
	int terminate=0;
	clrscr();
	printf("Enter The Size of Queue\n");
	scanf("%d",&size_que);
	do{

	clrscr();
	printf("0-initialize \n1-enter Data\n2-retrieve Data\n3-Display whole Queue \n4-Exit\n");
      //getch();
	flushall();
	ch=getch();

	switch(ch)
	{
		case'0'://initialize
			clrscr();
			flag=initQueue(Q1_ptr,size_que) ;
			if(flag)
			printf("Initialization is OKAY\n");
			else
			printf("FFFFFFFFail\n");
			getch();
			break;
		case'1'://inputQ
			clrscr();
			printf("Enter the Data element\n");
			scanf("%d",&ele_data);
			clrscr();
			flag=InputQ(Q1_ptr,ele_data);
			if(flag)
				printf("okay");
			else
				printf("fail inputQ");
			getch();
			break;
		case'2'://outputQ
			clrscr();

			flag=OutputQ(Q1_ptr,&ele_data);
			//printf("%d",flag);
			if(flag)
			{
				printf("Retrieve  Number is: %d\n",ele_data);
			}
			else  {
				printf("FFFFFFFFFFFFFail dequeu\n");
			       }
			getch();
			break;
		case '3'://dispaly
			clrscr();
			if(!IsEmptyQ(*Q1_ptr))
			{
			printf("Queue is:\n");
			Display(Q1_ptr);
			}
			else
			printf("Queue is empty\n");
			getch();
			break;
		case'4'://exit
		terminate=1;

	}

}while(terminate==0);

return 0;
}