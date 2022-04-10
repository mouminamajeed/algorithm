#include<stdio.h>
int fact(int);  
int main()    
{    
 int f, n=5,ps; 
 f=fact(n);
  printf("Factorial of %d is: %d\n",n,f); 
return 0;  
}
int fact(int n)
{
	if(n==1)
	return 1;
	else return n*fact(n-1);
}   
