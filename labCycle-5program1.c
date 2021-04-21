/* write a c program to input n numbers and perform linear serach for a given number. */

#include<stdio.h>
#include<stdlib.h>
# define max 10  
int main()
{
	int arr[maxs] = {0};
	int i = 0,n = 0,key = 0,flag = 0;	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	if(n > max)
	{
	   printf("elements exceed maxsize of %d\n", max);
	   exit(0);
	}
	printf("Enter the elements\n");
	for(i = 0; i < n; i++)
	  scanf("%d", &arr[i]);
	printf("Enter the element to search: ");
		scanf("%d", &key);
	for(i = 0; i < n; i++)
	    if(key == arr[i])
	    {
		flag= 1;
		printf("%d found at pos %d\n", key, i+1);
		break;
	    }
	    if(!flag)
		printf("%d not found\n", key);
	return 0;
}
