#
void swap(int *ptr_1,int*ptr_2)
{int temp;
temp=*ptr_1;
*ptr_1=*ptr_2;
*ptr_2=temp;
}
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