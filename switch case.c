#include<stdio.h>
main()
{
	//shows the captial of user selected states
	int states=0;
	printf("1.Tamil Nadu\n2.Himachal Pradesh\n3.Bihar\n4.Maharashtra\n5.Kerala\n6.Arunachal Pradesh");
	printf("\nEnter the choice of states:");
	scanf("%d",&states);
	switch(states)
	{
		case 1:
			printf("STATE-Tamil Nadu \n CAPTIAL-Chennai");
			break;
        case 2:
			printf("STATE-Himachal Pradesh\n CAPTIAL-Shimla");
			break;
    	case 3:
			printf("STATE-Bihar\n CAPTIAL-Patna");
			break;
    	case 4:
			printf("STATE-Maharashtra\n CAPTIAL-Mumbai");
			break;
		case 5:
			printf("STATE-Kerala\n CAPTIAL-Trivandrum");
			break;
		case 6:
			printf("STATE-Arunachal Pradesh\n CAPTIAL-Itanagar");
			break;
		default:
			printf("invalid chioce");
		}
}
