#include<stdio.h>
#include<conio.h>
int main()
{
	int factorial(int);
	int i,n;
	printf("Enter the number : ");
	scanf("%d",&n);
	i=factorial(n);
	printf("Factorial of the %d is %d",n,i);
}
int factorial(int n)
 {
 int f;
 if(n==1)
   return 1;
 else
   f=n*factorial(n-1);
   return f;
}
