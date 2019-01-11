#include<stdio.h>
void swap(int *ptr_1,int*ptr_2)
{int temp;
temp=*ptr_1;
*ptr_1=*ptr_2;
*ptr_2=temp;
}
int main(void)
{    int a,b;
printf("enter two numbers\n");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("firstno%d\nsecond no%d \n",a,b);
  getch();
return 0;
}
