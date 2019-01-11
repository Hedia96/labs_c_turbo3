#include<stdio.h>
#include<string.h>
//TASK:binary search for strings

int bin_search_names(char arr[][10],int size,char item_name[10])
{
int high,low,mid=0,r;
high=size-1;
low=0;
    // printf("firs s: %s\nsecnd s: %s",*(arr+2),item_name);

while(low<=high)
{
	mid=(high+low)/2;
	// if item_name > arr[i]
	r=strcmp(item_name,*(arr+mid));
       //	printf("mid: %d",mid);
	if(r>0)
	{
	low=mid+1;
	}
       else if(r<0)
	{
	high=mid-1;
	}
       else

	return mid;


}

return -1;

}

void main(void)
{
	char array[5][10];
	int i;
	char* item_name;
	int where;
	printf("enter the names will be stored in array\n");
	for(i=0;i<5;i++)
	scanf("%s",array+i);
	printf("enter name to search :\n");
	flushall();
	scanf("%s",item_name);
	//printf("%s",item_name);
	where=bin_search_names(array,5,item_name);
	if(where!=-1)
printf("item is found at %d index\n",where);
else
printf("NOT found\n");
getch();
clrscr();
/////
}