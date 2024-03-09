#include <stdio.h>



void bubbleSort(int arr[], int n, int *total)
{
	
	int i, j, temp;
	*total = 0;
	int num_swap;
	
	for (i = 0; i < n - 1; i++)
	{
		
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			(*total)++;
			num_swap++;
		}
		printf(arr[i], num_swap);
		printf("\n");
		printf(*total / 2);
		printf("\n");
	}
}

void selectionSort(int arr[], int n, int *total)
{
	int i, j, min_idx, temp;
	int num_swap = 0;
	*total = 0;

	for (i = 0; i < n - 1; i++)
	{
		
		
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;
		
		temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
		num_swap++;
		(*total)++;
	}
	printf(arr[i], num_swap);
	printf("\n");
	printf(*total / 2);
	printf("\n");
}



void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int arr1[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
	int arr2[] = { 90, 80, 70, 60, 50, 40, 30, 20, 10 };
	int n = 6;
	int total_swaps1;
	int total_swaps2;

	printf("array1 bubble sort:");
	bubbleSort(arr1, n, &total_swaps1);
	
	printf("array2 bubble sort:");
	bubbleSort(arr2, n, &total_swaps2);

	printf("array1 selection sort:");
	selectionSort(arr1, n, &total_swaps1);
	
	printf("array2 selection sort:");
	selectionSort(arr2, n, &total_swaps2);
	




}

