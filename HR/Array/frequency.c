#include <stdio.h>

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

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int found = 0, frequency = 0;
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == target) 
        {
            found = 1;
            frequency++;
        }
    }

    if(found) 
    {
        printf("%d is present in the array with frequency %d.\n", target, frequency);
    } else {
        printf("%d is not present in the array.\n", target);
    }

    return 0;
}
