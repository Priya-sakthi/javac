#include<stdio.h>
#include<conio.h>
main()
{
	int prime_number(int);
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int result=prime_number(n);
	
}
 int prime_number(int n)
{
	if(n/2==0)
	  printf("%d is the prime number",n);
	else
	  printf("%d is the not a prime number",n);
	return 0;
	
}
