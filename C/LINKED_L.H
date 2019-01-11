#include<stdlib.h>
#define highlight 0x70
#define esc  27
#define enter 13
#define down 80
#define up  72
#define normal 0x07
#define home 71
//#define eend 79
typedef struct node
{
	int data;
	struct node * next;
	struct node * prev;
}node;

typedef struct list
{
       //struct node*start;
       node * start;
       node * end;

	   // int x;
}list;
void display(list* lp);
void initlist(list* Lp);
node* createnode(void);
void append(list* lp,node* ele);
void insert(list* lp,node* ele);
node* search(list l,int key);
int deletelist(list* lp,int key);

void initlist(list* lp)
{
	lp->start=NULL;
	lp->end=NULL;
}
node* createnode(void)
{
	node* ptr_node;
	ptr_node=(node*)malloc(sizeof(node));
	return(ptr_node);
}

void append(list* lp,node* ele)
{
	if(!(lp->start))
	{// it is empty and this node is the first one
		lp->start=ele;
		lp->end=ele;
		ele->next=ele->prev=NULL;
	}
	else
	{
		ele->prev=lp->end;
		lp->end->next=ele;
		lp->end=ele;
		ele->next=NULL;

	}
}

void insert(list* lp,node* ele)
{
	node* temp=lp->start;
	if(!temp)
	{
		append(lp,ele);
		return;
	}
	while(temp&&(temp->data < ele->data));

	if(!temp)
	{
		append(lp,ele);
		return;
	}
	if(temp==lp->start)
	{
		temp->prev=ele;
		lp->start=ele;
		ele->next=temp;
		ele->prev=NULL;
	}else
	{
		temp->prev->next=ele;
		ele->prev=temp->prev;
		ele->next=temp;
		temp->prev=ele;

	}

}
 node* search(list l,int key)
 {	node* temp;
	if(!l.start)
	return NULL;
	temp=l.start;
		while(temp&&((temp->data)!=key))
		   temp=temp->next;
	return temp;
 }
  
 int deletelist( list* lp,int key)
 {
	node* temp=lp->start;
	if(!temp)
		return 0;
	temp=search(*lp,key);
	if(!temp)
		return 0;
	if(lp->start==lp->end)
	{
		lp->start= lp->end= NULL;
		
	}	
	else if(temp==lp->start&& lp->start!=lp->end)
	{
		
		lp->start=temp->next;
		lp->start->prev=NULL;
	}
	else if(temp==lp->end)
	{
		lp->end = temp->prev;
		//temp -> prev -> next = NULL;
		lp->end->next =NULL;
	}
	else
	{
		temp -> prev -> next = temp -> next;
		temp -> next -> prev = temp -> prev;
	}
	free(temp);
	return 1;
 }
 
 void display(list* lp)
 {
	node* temp;
	temp=lp->start;// begin of list
	while(temp!=NULL)
	{ printf(" \n%d\n",temp->data);
	  temp=temp->next;
	}


 }