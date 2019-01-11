#include<conio.h>
#include<string.h>
#include<stdio.h>
struct employee
{
	char name[20];
	int id;
       //	float bonus;
	float salary;
       //	float detduct;

};


void main(void)
{
	struct employee arr_e[3];
	int i;
     //	char Name[20];
	char key;
	int index ;
	float temp;
	char d_ch;
      //	int flag;
	//get the key from the
       clrscr();
	// take an action 	depend on the key
	printf("1-enter data empolyee\t 2-Display data\n ");
	scanf("%c",&key);
	switch(key)
	{  case '1':
		clrscr();
		printf("enter index of employee");
		scanf("%d",&index);
		if(index>=0&&index<3)
		{       printf("NAME\n");
		       //  gets(Name);
		       scanf("%s",arr_e[index].name);
			printf("ID\n");
			scanf("%d",&arr_e[index].id);
			printf("S11ALARY\n");
				scanf("%f",&temp);
			arr_e[index].salary=temp;

			}
	  //		else
	    //		flag=1;

		break;
	 case '2':
		clrscr();
		printf("1-display an item\t2-display all");
	       scanf("%c",&d_ch);
		switch(d_ch)

		{
			  case'1':clrscr();
					printf("enter the index ofa certain empolyee\n");
					scanf("%d",&index);
					if(index>=0&&index<3)
					  { printf("NAME\n");
					  puts(arr_e[index].name);
					  printf("ID\n");
					  printf("%d",arr_e[index].id);
					  printf("SALARY\n");
					  printf("%f",arr_e[index].salary);

				  }
				break;
			case'2':  for(i=0;i<3;i++)
				{
					printf(" name\n ");
					puts(arr_e[i].name);
					printf("the net salary for emp %d is %f\n",i+1,(arr_e[i].salary));
					printf("ID\n");
					printf("the id for employee %d is %d",i+1,arr_e[i].id);
				}


		}

	}
//getch();
}