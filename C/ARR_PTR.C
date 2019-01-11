#include<stdio.h>
#define siz 3
const int global_x=3;
void main(void)
{int arr[]={1,2,3,4};
//int arr_2[global_x];
int arr_3[siz];
int *ptr;
int x=12;
//printf("the address if arr is %d",arr);
ptr=arr;
printf("address%d",ptr);
printf("local x%d",&x);
printf("global x%d",&global_x);
printf("size int%d",sizeof(x));
getch();



}