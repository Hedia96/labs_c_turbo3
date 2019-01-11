
#include<stdio.h>
int seq_int(int*arr,int size,int item )
{ // int index=-1;
int i;
for(i=0;i<size;i++)
	{
	if(arr[i]==item)
	//index=i;
	return i;

	}
	return -1;

}
int bin_int(int* arr,int size,int item)
{  int high,low,mid;
high=size-1;
low=0;
while(low<high)
{    mid=(high+low)/2;
	if(arr[mid]<item)
	{
	low=mid+1;
       //	mid=(high+low)/2;
	}
      else if(arr[mid]>item)
	{
	high=mid-1;
       //	mid=(high+low)/2;
	}
       else
	return mid;
}
return -1;
}
void main(void)
{
int* arr;
int size;
int item;
// sequential searchand binary for both algorithms
int where;
int i;
clrscr();
printf("enter size\n");
scanf("%d",&size);
arr=(int*)malloc(size*sizeof(int));

printf("enter array\n");
for(i=0;i<size;i++)
scanf("%d",arr+i);

printf("enter a item u want to search\n");
scanf("%d",&item);
//sequential search

//where=seq_int(arr,size,item);
where=bin_int(arr,size,item);
if(where!=-1)
printf("item is found at %d index\n",where);
else
printf("NOT found\n");
// free allo
free(arr);
getch();
}