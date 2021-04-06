/*   write a program to input month number and display its respective month in words. */


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int month;
    printf("\nenter month: ");
    scanf("%d",&month);
    switch(month)
    {
	case 1: printf("\nJanuary\n");
		break;
        case 2: printf("\nFebruary\n");
		break;
	case 3: printf("\nMarch\n");
		break;
	case 4: printf("\nApril\n");
		break;
	case 5: printf("\nMay\n");
		break;
	case 6: printf("\nJune\n");
		break;
	case 7: printf("\nJuly\n");
		break;
	case 8: printf("\nAugust\n");
		break;
	case 9: printf("\nSeptember\n");
		break;
	case 10: printf("\nOctober\n");
		break;
	case 11: printf("\nNovember\n");
		break;
	case 12: printf("\nDecember\n");
		break;
	default: printf("\ninvalid month\n");
      		 break;
    }

    return 0;
}

