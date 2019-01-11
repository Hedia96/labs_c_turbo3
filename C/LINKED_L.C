#include<stdio.h>
#include<conio.h>
#include"linked_l.h"
#include"sorting.h"
int main(void)
{
	//menu for operations in linked list
	int i;
	char menu[6][16]={"Initialize","Append","Insert","Search","Delete node","Display"};
	int loc=0;
	int col=2;
	int row=4;
	char key;
	int data_item;
	int terminator=0;
	//list list_1;
	list* list_1_ptr;
//	node required_node;
	node* ptr_required_node;
	int flag;//delete sucsses indcator
       //	ptr_required_node=&required_node;
	//list_1_ptr=&list_1;

	// print menu with high light
	do{
	clrscr();
	for(i=0;i<6;i++)
	{if (loc==i)
		textattr(highlight);
	gotoxy(col,row+i);
	cprintf("%s",menu[i]);
	textattr(normal);

	}

	//get the	 key from the user
	flushall();
	key=getch();
	// take an action depend on the key
	switch(key)
	{
		case(NULL):
		key=getch();// noflush
		switch(key)
		{
			case up:
			loc--;
			if(loc<0)
				loc=5;
			break;
			case down:
			loc++;
			if(loc>5)
				loc=0;
			break;
			case home:
			loc=0;
			break;
			/*
			case eend:
			loc=5;
			break;
			*/
		}
			break;
		case enter:
		// see first where loc to do certain a action
		switch(loc)
		{
			case 0://init
			clrscr();
			initlist(list_1_ptr);
			printf("TheData :%d",list_1_ptr->start->data);
			printf("The next address :%p",list_1_ptr->start->next);
			printf("The prev address :%p",list_1_ptr->start->prev);
			getch();
			break;
			case 1://append
			clrscr();
			printf("Append :add the data\n ");
			ptr_required_node=createnode();
			printf("enter the data of node\n");
			scanf("%d",&((ptr_required_node)->data));
			append(list_1_ptr,ptr_required_node);
			break;
			case 2://insert
			clrscr();
			ptr_required_node=createnode();
			printf("enter the data of node\n");

			scanf("%d",&data_item);
			(ptr_required_node)->data=data_item;
			insert(list_1_ptr,ptr_required_node);
			//display(list_1_ptr);
			printf("\nNode inserted successfuly");
			getch();
			clrscr();

			break;
			case 3://search
			clrscr();
			printf("search enter which list and the item u want to search\n");
			scanf("%d",&data_item);
			ptr_required_node=search(*(list_1_ptr),data_item);
			 if(ptr_required_node)
			 printf("the addressis: %p",ptr_required_node);
			 else
			 printf("item not found\n");
			 getch();
			break;
			case 4://delete
			clrscr();
			printf("hello delete :p\n");
			printf("key wanted to delete\n");
			scanf("%d",&data_item);
			flag=deletelist(list_1_ptr,data_item);
			if(flag)
				printf("\n delete is valid\n");
			else
				printf("delete is failed\n");

			getch();
			break;
			case 5://display
			clrscr();
			printf("Display");
			display(list_1_ptr);
			printf(" \n");
			getch();
			break;
			case 6://sorting
			clrscr();
			printf("\n sorting \n");

		}

		break;
		case esc:
		terminator=1;

	}

//getch();
	}while(terminator==0);// continuous   condition

return 0;
}

