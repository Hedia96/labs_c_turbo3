#include<stdio.h>
int main()
{  int arr[5];
int* ptr;
int i;
clrscr();
ptr=arr;
//for scan array

printf("enter five numbers\n");
for(i=0;i<5;i++)
{scanf("%d",ptr+i);
} //
printf("Display of five numbers\n");
for(i=0;i<5;i++)
{   printf("%d",*(ptr+i));
printf("\n");
}
getch();
return 0;
}