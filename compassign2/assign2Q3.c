//Write a C program to find sum of all odd numbers between 1 to n.
#include <stdio.h>
void main()
{int i,n,sum=0;
printf("Enter the number till you want the sum of odd numbers:");
scanf("%d",&n);

for(i=1;i<=n;i++)
if(i%2!=0)
sum+=i;
	
printf("\nSum of odd numbers till %d :%d",n,sum);
}