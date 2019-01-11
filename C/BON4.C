#include<conio.h>
#include<string.h>
#include<stdarg.h>
struct employee
{
	char name[50];
	int id;
	float bonus;
	float salary;
	float detduct;

};
void main(void)
{
	int index;
//	printf("1-enter data 2- display\n");
	char dis_ch;
	char choic_display;
	struct employee arr_e[3];
	float temp;
	int i;
	printf("-enter data 2-dispaly");
	switch(dis_ch){
	case ('1'):
			clrscr();
			// enter data by index
			printf("enter the index o wanted employee:\n");
			scanf("%d",&index);
			if(index<3&& index>=0)
			{
				//arr_e[index]
			printf("enter name\n");
			gets(arr_e[index].name);
			printf("\n enter id:\n");
			scanf("%d",&temp);

			arr_e[index].id=temp;
			printf("\n enter bonus:\n");
			scanf("%f",&temp);
			arr_e[index].bonus=temp;
		//printf("\n enter the salary:\n");
		//scanf("%f",&temp);
		//arr_e[i].salary=temp;
		printf("\n enter the salary:\n");
		scanf("%f",&temp);
		arr_e[index].salary=temp;
		printf("\n enter the detduct:\n");
		scanf("%f",&temp);
		arr_e[index].detduct=temp;
			}
			break;
			case '2':// print one or all
			clrscr();
			printf("1-display one\n 2-display all\n");
			scanf("%c",&choic_display);
			switch(choic_display)
			{
				case '1':
				printf("enter the index of req emp\n");
				scanf("%d",&index);
				if(index<3&& index>=0)
				{
				printf(" name\n ");
				puts(arr_e[index].name);
				printf("the net salary for emp %d is %f\n",index+1,(arr_e[index].salary+arr_e[index].bonus-arr_e[index].detduct));
				}
				break;

				case '2'://print all
				for(i=0;i<3;i++)
 {
		//printf("the result of all Data\n");
		printf(" name\n ");
		puts(arr_e[i].name);
		printf("the net salary for emp %d is %f\n",i+1,(arr_e[i].salary+arr_e[i].bonus-arr_e[i].detduct));
 }


}
