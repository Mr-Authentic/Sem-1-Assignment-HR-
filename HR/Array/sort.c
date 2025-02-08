#include <stdio.h>

// Function to find largest and smallest number
void findLargestSmallest(int arr[], int n, int *largest, int *smallest) 
{
    *largest = *smallest = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > *largest) 
        {
            *largest = arr[i];
        }
        if(arr[i] < *smallest) 
        {
            *smallest = arr[i];
        }
    }
}

// Function to sort array in ascending order
void sortAscending(int arr[], int n) 
{
    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort array in descending order
void sortDescending(int arr[], int n) 
{
    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(arr[i] < arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to print array
void printArray(int arr[], int n) 
{
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int largest, smallest;

    findLargestSmallest(arr, n, &largest, &smallest);
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    printf("Original array: ");
    printArray(arr, n);

    sortAscending(arr, n);
    printf("Array in ascending order: ");
    printArray(arr, n);

    sortDescending(arr, n);
    printf("Array in descending order: ");
    printArray(arr, n);

    return 0;
}


