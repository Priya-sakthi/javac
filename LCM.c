#include<stdio.h>
int lcm(int,int);
int main()
{
	int a,b,num;
	printf("\nEnter the 2 integers to find LCM:");
	scanf("%d",&a);
	scanf("%d",&b);
	num=lcm(a,b);
	printf("The LCM of %d and %d is %d",a,b,num);
}
int lcm(int a,int b)
{
	static int num=1;
	if(num%a==0 && num%b==0)
	{
	return num;
	}
	else
	{
		num++;
		lcm(a,b);
		return num;
	}
}
