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
 void main (void )
 
 { 	int i;
	float temp=0.0;
	struct employee arr_e[3];

 for(i=0;i<3;i++)
 {          printf("enter name\n");
		gets(arr_e[i].name);
		printf("\n enter id:\n");

	scanf("%d",&temp);
	arr_e[i].id=temp;
	printf("\n enter bonus:\n");
	scanf("%f",&temp);
	arr_e[i].bonus=temp;
//printf("\n enter the salary:\n");
//scanf("%f",&temp);
//arr_e[i].salary=temp;
printf("\n enter the salary:\n");
scanf("%f",&temp);
arr_e[i].salary=temp;
printf("\n enter the detduct:\n");
scanf("%f",&temp);
arr_e[i].detduct=temp;
 }
 
 // dislay all employee names and salaries
 for(i=0;i<3;i++)
 {
	 printf("the result of all Data\n");
printf(" name\n ");
puts(arr_e[i].name);
printf("the net salary for emp %d is %f\n",i+1,(arr_e[i].salary+arr_e[i].bonus-arr_e[i].detduct));
 }
 getch();
 }