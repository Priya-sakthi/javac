#include<stdio.h>
main()
{
	int a;
	printf("Enter you marks:");
	scanf("%d",&a);
if(a>=85 && a<=100)
	{
	printf("Your grade is:GRADE A");
	}
else if(a>=70 && a<=84)
	{
		printf("Your grade is:GRADE B");
    }
else if(a>=55 && a<=69)
	{
		printf("Your grade is:GRADE C");
    }
else if(a>=40 && a<=54)
	{
		printf("Your grade is:GRADE D");
    }
else
	{
		printf("Your grade is:GRADE F");
    }             
}
