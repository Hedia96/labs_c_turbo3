#include<stdio.h>
#define MAX_size 5
//TASK:array of struct and search id ,name by seq search;
 typedef struct employee
{
	char name[50];
	int id;
       //	float bonus;
	//int salary;
       //	float detduct;
}Employee;

Employee add(void)
 {
 //struct employee e;
 Employee e;
 //float temp=0.0;
   printf("enter name\n");
   flushall();
   gets(e.name);
   printf("enter id\n");
   flushall();
   scanf("%d",&e.id);

   return e;
 }

/*
Name function:       seq_struct_search_ID();
description: search by id in array of struct
data return : index
paramter list :pointer to array of struct,item (name or id),size)

*/
int seq_struct_search_ID(Employee* s_ptr ,int size,int item)
{
	int i;
for(i=0;i<size;i++)
	{
	if((s_ptr+i)->id==item)
	//index=i;
	return i;

	}
	return -1;


}
int seq_struct_search_name(Employee* s_ptr ,int size,char* item_name)
{
		int i;
for(i=0;i<size;i++)
	{
	if(!strcmp((s_ptr+i)->name,item_name))//(s_ptr+i)->name==item_name) wrong because they are pointers
	//index=i;
	return i;

	}
	return -1;

}

void main(void)
{
	Employee arr_e[MAX_size];
	int i;
	int where;
	int item;
	char* item_name;
	//enter data
	clrscr();
	printf("enter array of struct\n");
	for(i=0;i<MAX_size;i++)
	{

	arr_e[i]=add();
	}
	printf("enter a ID u want to search\n");
	scanf("%d",&item);
	// search by id
	where=seq_struct_search_ID(arr_e,MAX_size,item);
if(where!=-1)
printf("item is found at %d index\n",where);
else
printf("NOT found\n");
//search by name
	printf("enter a NAME u want to search\n");
	flushall();
	gets(item_name);

	where=seq_struct_search_name(arr_e,MAX_size,item_name);
if(where!=-1)
printf("item is found at %d index\n",where);
else
printf("NOT found\n");
getch();

}
