#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//TASK:Sorting by bubble and sequential

//void selection_sort(int* arr,int size);
//void bubble_sort();


void swap(int *ptr_1,int*ptr_2)
{int temp;
temp=*ptr_1;
*ptr_1=*ptr_2;
*ptr_2=temp;
}
/*
void selection_sort(int* arr,int size)
{
//enhancememt
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{	temp=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[temp]>arr[j])
			temp=j;
		}
		swap(&arr[temp],&arr[i]);

	}





}
*/
///////////////////////////////////////////////////

void bubble_sort(int* arr,int size)
{	int j,i;

for(i=0;i<size-1;i++)
{
	for(j=size-1;j>0;j--)
	{
		if(arr[j]<arr[j-1])
			swap(&(arr[j]),&(arr[j-1]));
	}
}

}




int main(void)
{
	//int array[6];
	int * ptr;
	int i;
	int size;
	clrscr();
	printf("enter the size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	printf("enter integers\n");
		for(i=0;i<size;i++)
		{
		flushall();
		scanf("%d",ptr+i);
		}
		/*
	selection_sort(ptr,size);
		printf("array after sorted by selection \n");
			for(i=0;i<size;i++)
			printf("%d\n",*(ptr+i));
		       */
	bubble_sort(ptr,size);

		printf("array after sorted by bubble\n");
			for(i=0;i<size;i++)
			{
			printf("%d\n",*(ptr+i));
			}

	 free(ptr);

       getch();
       return 0;
}







