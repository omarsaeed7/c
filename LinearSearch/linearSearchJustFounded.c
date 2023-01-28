#include <stdio.h>

int search(int arr[], int key, int length);

int main()
{
	// Test array
	int arr[] = {1,4,5,5,1,13,512,1,151};
	// search key
	int key = 0;
	// i used counter cause bool have problem with clang compiler
	// count the length of the array
	int length = sizeof(arr) / sizeof(int); // 24 / 4 = 7 array in bytes of int 
	// ask user for the key
	printf("Enter Key: ");
	scanf("%d", &key);
	// store retrun value in variable to use it in condition
	short int isFound = search(arr,key,length);	
	// show the user the array	
	printf("[");
	for(int i=0; i < length -1 ; i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("]\n");
	// check if it's found based on the return value
	if (isFound == -1)
		printf("Not Found\n");
	else if (isFound == 1)
		printf("Found\n");
}

/* Linear Search Function */
int search(int arr[], int key, int length)
{
	// if key in array this condition will work
	if (length == -1)
	{
		return -1;
	}
	// check the key is in the array ?
	if (arr[length] == key)
	{
		printf("%d is in Index : %d\n", key ,length+1);
		return 1;
	}	
	// recursion of the function
	search(arr, key, length-1);	
}


