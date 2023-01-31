#include <stdio.h>
void main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	// size of the array
	int n = sizeof(arr) / sizeof(int);
	// upper is = array size - 1 cause array start with 0
	int lower = 0, upper = n-1;
	int key,mid;


	printf("Enter Search Key: ");
	scanf("%d", &key);

	do
	{
		// calculate the mid of the array
		mid = (lower + upper) / 2;
		if (key == arr[mid])
		{
			printf("Found in : %d\n", mid);
			break;
		}else if(key > arr[mid])
		{	
			// lower will move to the mid + 1 cause we checked the mid
			lower = mid+1;
		}else 
		{
			// upper will move to the mid - 1 cause we checked the mid
			upper = mid-1;
		}	
	} while(lower <= upper);
}
