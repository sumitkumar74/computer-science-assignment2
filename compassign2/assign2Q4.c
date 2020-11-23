//Write a C program to print multiplication table of any number.
#include <stdio.h>
void main()
{int i,n;
printf("Enter a number:");
scanf("%d",&n);
printf("\n");

for(i=1;i<=10;i++)
{printf("%d*%d=%d\n",i,n,i*n);}
}