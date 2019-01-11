#include<conio.h>
#include<string.h>
#include<stdio.h>
struct employee
{
	char name[50];
	int id;
       //	float bonus;
	int salary;
       //	float detduct;

};
void main(void)
{       int check[3]={3,3,3};
	struct employee arr_e[3];
	int i;
	char key;
	int index ;
	float temp;
	char d_ch;
	int terminator=0;
	//get the key from the
	// take an action depend on the key

	do

	{         clrscr();
		  printf("1-enter data empolyee\t 2-Display data\n ");
		scanf("%c",&key);
		switch(key)
	{  case '1':
		clrscr();
		printf("enter index of employee");
		scanf("%d",&index);
		if(index>=0&&index<3)
		{   printf("NAME\n");
			flushall();
			gets(arr_e[index].name);
			printf("ID\n");
			scanf("%d",&arr_e[index].id);
			printf("SALARY\n");
			scanf("%f",&temp);
			arr_e[index].salary=temp;
			check[index]=index;
		}
		else
		terminator=1;

		break;
	 case '2':
		clrscr();
		printf("o-display an item \n a-display all");
		flushall();
		scanf("%c",&d_ch);
		switch(d_ch)

		{
			  case'o':clrscr();
					printf("enter the index of a certain empolyee\n");
					scanf("%d",&index);
					if(index>=0&&index<3)
					{
						  if(check[index]!=3)

					  {
					  printf("NAME\n");
					  puts(arr_e[index].name);
					  printf("ID\n");
					  printf("%d",arr_e[index].id);
					  printf("SALARY\n");
					  printf("%d",arr_e[index].salary);
					   getch();
					   }
					   else
					    {
						printf("\nsorry it is garbage\n");
						terminator=1;
					   }
				    }
					else
						terminator=1;

				break;
			case'a':   if(check[0]!=3&&check[1]!=3&&check[2]!=3)
				       {
						printf(" name\n ");
						puts(arr_e[i].name);
						printf("the net salary for emp %d is %f\n",i+1,(arr_e[i].salary));
						printf("ID\n");
						printf("the id for employee %d is %d",i+1,arr_e[i].id);

					}
					else
					{  printf("\n some of them are gabage\n");
					   terminator=1;

					}

		       default:
			       terminator=1;
		}

	}

	}while(terminator==0);


}