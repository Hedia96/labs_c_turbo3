#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define col (80/2)-(strlen(str[i])/2)
#define row (25/3)+(2*i)
#define normal 0x07
#define highlight 0x70
#define ESC 27
#define Home 71
#define End 79
#define up 72
#define down 80
#define Enter 13


typedef struct Node{
	int data;
	struct Node * next;
	struct Node * prev;
}Node;

typedef struct doublyLinkedList{

	Node * start;
	Node * end;
}List;

void DisplayList(List * lp);
void InitList(List *lp);
Node * createNode (void);
void AppendNode(List *lp,Node * ele);
Node * searchNode(List l, int key);
int DeleteNode(List *lp, int key);
void InsertNode(List * lp, Node *ele);





int main (void){
	List * L;
	int i=0,loc=0,terminate=0,ListData=0,flag=0;
	Node * new_Node;
	char key;

	char str[7][50]={"Init List","Append","Insert","Search","Delete List","Display List","Sort"};
	do{

		for(i=0;i<7;i++){
			if(i==loc)
				textattr(0x07);
			gotoxy(col,row);
			cprintf("%s",str[i]);
			textattr(0x70);
		}

	flushall();
	key = getch();
	switch(key){
		case NULL:
			key = getch();
			switch(key){
				case up:
					loc--;
					if(loc<0)	loc=6;
				break;
				case 9:
					loc++;
					if(loc<6) loc=0;
				break;
				case down:
				      loc++;
				      if(loc>6)	loc=0;
				break;
				case Home:
					loc=0;
				break;
				case End:
					loc=6;
			}
		break;
		case Enter:
			clrscr();
			switch(loc){
				case 0:
					///clrscr();
					//printf("\nNew Action done here\n press any key to continue");

					InitList(L);
					printf("\nList cretaed successfuly");
					getch();
					clrscr();
				break;
				case 1:
					//clrscr();
				       //	printf("Display action done here\nPress any key to continue");
					printf("\nAppend the element to be added to the list: ");
					scanf("%d",&ListData);

					new_Node = createNode();
					new_Node -> data = ListData;
					AppendNode(L,new_Node);
					printf("\nNode appendded successfuly");
					getch();
					clrscr();
					break;
					case 2:
						// insert
						printf("\nInsert the element to be added to the list: ");
						scanf("%d",&ListData);
						//printf("%d:",ListData);
						new_Node = createNode();
						new_Node -> data = ListData;
						InsertNode(L,new_Node);
						printf("\nNode inserted successfuly");
						getch();
						clrscr();

					break;
					case 3:
						// search
						printf("\nEnter the element you want to find: ");
						scanf("%d",&ListData);
						//new_Node -> data = ListData;

						new_Node = searchNode(*L,ListData);
						if(!new_Node)	printf("\nElement doesn't not Exist");
						else printf("\nElement exists");
						getch();
						clrscr();
					break;
					case 4:    // delete node
						printf("\nEnter the element you want to delete: ");
						scanf("%d",&ListData);
						flag = DeleteNode(L,ListData);
						if(flag)	printf("\nElement deleted");
						else	printf("\nElement doesn't exist in the list to be deleted");
						getch();
						clrscr();
					break;
					case 5: // Display
						printf("List elements are: \n");
						DisplayList(L);
						getch();
						clrscr();

					break;
					case 6:
						terminate =1;
					break;
			}

		break;
		case ESC:
			terminate =1;
	}
	}while(terminate ==0);
	getch();
	clrscr();






return 0;
}

void DisplayList(List * lp){
	Node * temp = lp -> start;
	while(temp){
		printf("%d ",temp -> data);
		temp = temp -> next;
	}

}
void InitList(List *lp){
	lp->start = lp->end = NULL;

}

Node * createNode (void){
	return	(Node *) malloc(sizeof(Node));
}

void AppendNode(List *lp,Node * ele){
	if(! lp-> start){
		lp -> start = lp -> end = ele;
		ele -> next = ele -> prev = NULL;
	}
	else{
		ele -> prev = lp -> end;
		lp -> end -> next = ele;
		lp -> end = ele;
		ele -> next = NULL;
	}

}
// should check if return is NULL
Node * searchNode(List l, int key){
	Node *temp ;
	if(! l.start)	return NULL;
	temp = l.start;


	while(temp && temp -> data != key)
		temp = temp-> next;
	return temp;

}

int DeleteNode(List *lp, int key){
	Node * temp = lp -> start;
	if(! temp)	return 0;

	temp = searchNode(*lp,key);

	if(! temp )	return 0;

	if(lp -> start == lp -> end) {
		lp ->start = lp -> end = NULL;

	}else if( temp == lp->start && lp -> start != lp ->end){
		lp -> start = temp ->next;
		lp -> start -> prev = NULL;

	}else if(temp == lp -> end){
		lp -> end = temp -> prev;
		//temp -> prev -> next = NULL;
		lp-> end -> next = NULL;
	}
	else{
		temp -> prev -> next = temp -> next;
		temp -> next -> prev = temp -> prev;
	}
	free(temp);
	return 1;


}
void InsertNode(List * lp, Node *ele){
	Node * temp = lp -> start;
	if( ! temp ){
		AppendNode(lp,ele);
		return;
	}
	while( temp && temp -> data < ele -> data){
		temp = temp -> next;
	}

	if(! temp){
		AppendNode(lp,ele);
		return;
	}

	if(temp == lp ->start){
		temp -> prev = ele;
		lp -> start = ele;
		ele -> next = temp;
		ele -> prev = NULL;

	}
	else{
		temp -> prev -> next = ele;
		ele -> prev = temp -> prev;
		ele -> next = temp;
		temp -> prev = ele;

	}

}