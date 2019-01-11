#include<stdio.h>
#include<string.h>
#include<conio.h>
/*
task:pointer to pointer sum,
*/
void main(void)
{
//int arr[3][4];
int** arr;
int i,j;
int f_dim,s_dim;//first dimension second dimension
float avg=0.0;
int sum=0;
clrscr();
printf("enter first and second dimension\n");
scanf("%d %d",&f_dim,&s_dim);
//allocation are two steps

arr=(int**)malloc(f_dim*sizeof(int*));
for(i=0;i<f_dim;i++)
	arr[i]=(int*)malloc(s_dim*sizeof(int));
//end allocation pointer to pointer  arr f_sim*s_dim

printf("enter arr:");

for(i=0;i<f_dim;i++)
{
	for(j=0;j<s_dim;j++)
	{

	scanf("%d",(*(arr+i))+j);// deference cancels reference
    //	printf(" %d",arr[i][j]);
	}
//printf("\n");

}

// get sum of each row

for(i=0;i<f_dim;i++)
{
	for(j=0;j<s_dim;j++)
	{
	sum+=arr[i][j];
	}
printf("the sum of%d row is %d\n",i+1,sum);
sum=0;
}


//get avg col
// getch();

// two method same i ,j but arr[j][i] or change for loop iner outer and vice vwers

for(j=0;j<s_dim;j++)
{        sum =0;
	for(i=0;i<f_dim;i++)
	{
		sum+=arr[i][j];
	}
	avg=(float)(sum/f_dim);
	printf("\nthe avg of %d  col is %f",j+1 ,avg);


}

// deallocation  by inverse process
for(i=0;i<f_dim;i++)
	arr[i]=(int*)free(s_dim*sizeof(int));
arr=(int**)free(f_dim*sizeof(int*));

getch();
}