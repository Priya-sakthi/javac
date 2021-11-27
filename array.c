#include<stdio.h>
main()
{
	int a,b,i,j;
	printf("Enter the number of rows and colums: ");
	scanf("%d",&a);
	scanf("%d",&b);
	int ary[a][b];
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			printf("Enter the value for matrics: ");
			printf("\nElement[%d][%d]",i+1,j+1);
			scanf("%d",&ary[i][j]);
		}
	}
		printf("element in matrix: ");
		for(i=0;i<3;i++)
		{
			printf("\n");
			for(j=0;j<3;j++)
			{
			printf("%d\t",ary[i][j]);
}
}
}
}
