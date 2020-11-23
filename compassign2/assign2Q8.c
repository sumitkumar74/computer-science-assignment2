//Write a C program to find frequency of each digit in each integer.
#include<stdio.h>
void main()
{int i,freq[10];
long int n;
printf("Enter the number:");
scanf("%ld",&n);

for(i=0;i<10;i++)
freq[i]=0;

while(n>0)
{i=n%10;
n/=10;
freq[i]++;}

for(i=0;i<10;i++)
printf("\nFrequency of %d=%d",i,freq[i]);
}