#include<stdio.h>
#include<stdlib.h>
void merge(int*a,int*l,int*r,int lcount,int rcount)
{
		int i=0,j=0,k=0;
	while(i<lcount && j<rcount)
	{
		if(l[i]<r[j])
		{
			a[k]=l[i];
			i++;
			k++;
		}
		else
		{
			a[k]=r[j];
			j++;
			k++;

		}
		while(i<lcount)
		{
			a[k++]=l[i++];
		}
		while(j<rcount)
		{
			a[k++]=r[j++];
		}

	}
}
void merge_sort(int* a,int size)
{
int mid;
int i;
int* l;
int* r;
if(size<2)
	{
	return ;
	}
mid=size/2;
l=(int*)malloc(size*sizeof(int));
r=(int*)malloc((size-mid)*sizeof(int));
for(i=0;i<mid;i++)
{
	l[i]=a[i];
}
for(i=mid;i<size;i++)
{
	r[i-mid]=a[i];
}
merge_sort(l,mid);
merge_sort(r,(size-mid));
merge(a,l,r,mid,(size-mid));
free(l);
free(r);

}
void main(void)
{
	int array[5];
	int i;
	clrscr();

	for(i=0; i<5; i++)
	{
		printf("Enter arr[%d]: ",i);
		scanf("%d",&array[i]);
	}

	printf("\nAfter Merge Sorting:\n");
	merge_sort(array,5);
	for(i=0; i<5; i++)
	{
		printf("arr[%d]= %d\n",i,array[i]);
	}
	  // free(ptr);
	getch();

}
