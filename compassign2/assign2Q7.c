//Write a C program to swap first and last digits of a number.
#include <stdio.h>
void main()
{int i,n,temp,a[10];
printf("Enter the number of digits in your number:");
scanf("%d",&n);
printf("\nEnter the number:");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

temp=a[0];
a[0]=a[n-1];
a[n-1]=temp;

printf("\nAfter swaping 1st & last digit:");
for(i=0;i<n;i++)
printf("%d",a[i]);
}