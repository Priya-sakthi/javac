#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int result = sum_of_digit(num);
	printf("The sum of digit %d is %d",num,result);
}
int sum_of_digit(int n)
{
	if(n==0)
	return 0;
	return(n%10+sum_of_digit(n/10));
}
