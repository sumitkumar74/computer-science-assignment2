//Write a C program to find first and last digit of a number.
#include <stdio.h>
void main()
{int first,last; long int n;
printf("Enter a number:");
scanf("%ld",&n);

last=n%10;

while(n!=0)
{first=n%10;
n/=10;}

printf("\nFirst digit:%d Last digit:%d",first,last);
}