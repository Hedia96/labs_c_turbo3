#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;



void swap(int* p1,int* p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
/*
void selection_sort_descending(triangle* tr,int* area_ptr,int size)
{int i,j,index_smaller;
    for(i=0;i<size-1;i++)
    {      index_smaller=i;
            for(j=i+1;j<size;j++)
            {
                if(area_ptr[index_smaller]>area_ptr[j])
                    index_smaller=j;
            }
         swap(area_ptr[i],area_ptr[index_smaller]);
         swap(tr[i].a,tr[index_smaller].a);
         swap(tr[i].b,tr[index_smaller].b);
         swap(tr[i].c,tr[index_smaller].c);

    }

}
*/
void sort_by_area(triangle* tr, int n)
{
	/**
	* Sort an array a of the length n
	*/
    int semi_perimeter;
    int* area_ptr=(int*)malloc(n*sizeof(int));
    int i,j,index_smaller;
	for(i=0;i<n;i++)
	{
	    semi_perimeter=(tr[i].a+tr[i].b+tr[i].c)/2;
	    area_ptr[i]=semi_perimeter*(semi_perimeter-tr[i].a)*(semi_perimeter-tr[i].b)*(semi_perimeter-tr[i].c);
	}
    //sorting in ascending order by selection sort
//selection_sort_descending(tr,area_ptr, n);
 //    int j,index_smaller;
    for(i=0;i<n-1;i++)
    {      index_smaller=i;
            for(j=i+1;j<n;j++)
            {
                if(area_ptr[index_smaller]>area_ptr[j])
                    index_smaller=j;
            }
        swap(&area_ptr[i],&area_ptr[index_smaller]);
         swap(&tr[i].a,&tr[index_smaller].a);
         swap(&tr[i].b,&tr[index_smaller].b);
         swap(&tr[i].c,&tr[index_smaller].c);

    }


}

int main()
{
	int n,i;
   //	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	getch();
	free(tr);
	return 0;
}
