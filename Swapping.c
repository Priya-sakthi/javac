#include<stdio.h>
main()
{
	int a,b,temp=0;
	printf("Enter the two values:");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Entered values are:%d %d",a,b);	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nThe swapped values are %d %d",a,b);
	return 0;
	
}
