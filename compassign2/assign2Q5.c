//Write a C program to count number of digits in a number.
#include <stdio.h>
void main()
{ long long n;
  int count=0;
	printf("Enter a number:");
	scanf("%lld",&n);
	
while(n!=0)
{n=n/10;
count++;}

printf("\nNo of digits:%d",count);	
}