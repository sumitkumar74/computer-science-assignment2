//Write a C program to enter a number and print it in words.
#include<stdio.h>    
void main()
{int n,reverse=0,r,c=0,i;
  char *ones[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  char *tens[]={"ten","eleven","twelve","thirteen","fourteen","fifeteen","sixteen","seventeen","eightteen","nineteen"};
char *s[]={"zero","ten","twenty","thirty","fourty","fifety","sixty","seventy","eighty","ninty"};

printf("Enter the number:\n");  
scanf("%d",&n);  
i=n; 

while(n>0)   
{r=n%10;    
 reverse=reverse*10+r;   
 n/=10; }  

n=reverse;

while(i>0)   
{i/=10; 
 c++;} 

while(n>0)
{ r=n%10;
	if(c==4)
	 printf("%s thousand ",ones[r]);

	if(c==3)
	 switch(r)
 	{case 0:break;
  	default:printf("%s hundred ",ones[r]);}

	if(c==2)
	 switch(r)
 	{case 0:break;
  	case 1:n/=10;
 	       printf("%s ",tens[r=n%10]);
 	       c=0;
 	       break;
 	 default:printf("%s ",s[r]);}
 	
	if(c==1)
	  printf("%s ",ones[r]);
c--;
n/=10;    
}   
}  
