#include<stdio.h>
#include<string.h>
#include<conio.h>
void main(void)
{
int arr[3][4];
int i,j,sum;
float avg=0;
sum=0;
clrscr();
 printf("enter arr:");

for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{

	scanf("%d",&arr[i][j]);
    //	printf(" %d",arr[i][j]);
	}
//printf("\n");

}

// get sum of each row

for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{
	sum+=arr[i][j];
	}
printf("the sum of%d row is %d\n",i+1,sum);
sum=0;
}


//get avg col
// getch();

// two method same i ,j but arr[j][i] or change for loop iner outer and vice vwers

for(j=0;j<4;j++)
{        sum =0;
	for(i=0;i<3;i++)
	{
		sum+=arr[i][j];
	}
       //	avg=sum/3;
	printf("\nthe avg of %d  col is %d",j+1 ,sum/3);


}
getch();
}