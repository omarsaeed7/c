#include <stdio.h>
int main()
{
	short int arr[] = { 1, 4, 51, 2, 51, 14, 9};
	int searchKey = 0;
	int size = sizeof(arr);
	int length = sizeof(arr) / sizeof(short int);
	int i;
	int counter = 0;

	printf("Enter Search Key: ");
	scanf("%d", &searchKey);
	
	for (i = 0; i < length ; i++)
	{
		if (arr[i] == searchKey)
		{
			printf("Found in location: %d\n", i);
			counter++;	
		}
	}
	if (counter == 0)
		printf("Not Found \n");
}
