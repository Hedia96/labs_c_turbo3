#include<string.h>
#include<stdio.h>
 void main(void)
{
char first[10];
char last[10];
char full[22];
//enter name
printf("please enter first name\n");
gets(first);
printf("please enter last name\n");
gets(last);
//
strcpy(full,first);
strcat(full," ");
strcat(full,last);
 printf("the full name is \n");
puts(full);	
getch();
}