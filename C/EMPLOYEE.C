#include<conio.h>
#include<string.h>
struct employee
{	
	char name[50];
	int id;
	float bonus;
	float salary;
	float detduct;

};
void main(void)

{// input from user
struct employee e;
clrscr();
printf("\n enter the name\n");
gets(e.name);
printf("\n enter id:\n");
scanf("%d",&e.id);
printf("\n enter bonus:\n");
scanf("%f",&e.bonus);
printf("\n enter the salary:\n");
scanf("%f",&e.salary);
printf("\n enter the detduct:\n");
scanf("%f",&e.detduct);

// outpt
printf("the result of all Data\n");
printf(" name\n ");
puts(e.name);
printf("the net salary is %f\n",(e.salary+e.bonus-e.detduct));

	getch();
}