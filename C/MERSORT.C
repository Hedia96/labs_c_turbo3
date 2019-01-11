
#include <stdio.h>
#include <conio.h>

void Merge(int*A, int*L,int LeftCount, int* R, int RightCount);
void MergeSort(int* arr, int size);

void main(void)
{
	int i;
	int array[5];
	clrscr();
	for(i=0; i<5; i++)
	{
		printf("Enter arr[%d]: ",i);
		scanf("%d",&array[i]);
	}
	printf("\nAfter Merge Sorting:\n");
	MergeSort(array,5);
	for(i=0; i<5; i++)
	{
		printf("array[%d]= %d\n",i,array[i]);
	}

	getch();
}

void Merge(int*A, int*L,int LeftCount, int* R, int RightCount)
{
	int i=0,j=0,k=0;
	while(i<LeftCount && j<RightCount)
	{
		if(L[i] < R[j])
		{
			A[k]= L[i];
			i++;
			k++;
		}
		else
		{
			A[k]= R[j];
			j++;
			k++;
		}
	}
	while(i<LeftCount)
	{
		A[k++]=L[i++];
	}
	while(j<RightCount)
	{
		A[k++]=R[j++];
	}
}

void MergeSort(int* arr, int size)
{
	int mid,i,*L,*R;

	if(size <2)
		return;
	mid=size/2;
	L= (int*) malloc(mid * sizeof(int));
	R= (int*) malloc( (size-mid) * sizeof(int));
	for(i=0; i<mid; i++)
	{
		L[i]=arr[i];
	}
	for(i=mid; i<size; i++)
	{
		R[i-mid]= arr[i];
	}
	MergeSort(L,mid);
	MergeSort(R,size-mid);
	Merge(arr,L,mid,R,size-mid);
	free(L);
	free(R);

}