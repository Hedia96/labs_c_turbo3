#include<stdio.h>
#include<conio.h>
//print_str();
struct employee
{
	char name[50];
	int id;
       //	float bonus;
	float salary;
       //	float detduct;

};
struct employee add(void);
void display(struct employee);
 void main (void )

 {   	int i;

	struct employee arr_e[3];
	 clrscr();
	for(i=0;i<3;i++)
	{

	arr_e[i]=add();


	}
	//display
	for(i=0;i<3;i++)
	{
	display(arr_e[i]);
	getch();
	}
 }
void display(struct employee e)

 {
 printf("\n the name\n");
puts(e.name);
printf("\n id:\n");
printf("%d",e.id);
//printf("\n enter bonus:\n");
//scanf("%f",&e.bonus);
printf("\nthe salary:\n");
printf("%f",e.salary);
//printf("\n enter the detduct:\n");
//scanf("%f",&e.detduct);

 }
 struct employee add()
 {  struct employee e;
 float temp=0.0;
   printf("enter name\n");
   flushall();
   gets(e.name);
   printf("enter id\n");
   flushall();
   scanf("%d",&e.id);
   printf("enter salary\n");
   flushall();
   scanf("%f",&temp);
   temp=e.salary;
   return e;
 }