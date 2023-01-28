#include <stdio.h>
#include <stdbool.h>
int main()
{
	short int arr[] = { 1, 4, 51, 2, 51, 14, 9};
	int searchKey = 0;
	int size = sizeof(arr);
	int length = sizeof(arr) / sizeof(short int);
	int i;
	bool found = false;

	printf("Enter Search Key: ");
	scanf("%d", &searchKey);
	
	for (i = 0; i < length ; i++)
	{
		if (arr[i] == searchKey)
		{
			printf("Found in location %d \n", i);
			found = true;	
		}
	}
	if (!found)
		printf("not found \n ");
}
