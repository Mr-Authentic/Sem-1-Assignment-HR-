#include <stdio.h>

int main() 
{
    int matrix[3][3], i, j;
    int primary_diagonal_sum = 0, secondary_diagonal_sum = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of primary diagonal (from top-left to bottom-right)
    for(i = 0; i < 3; i++) 
    {
        primary_diagonal_sum += matrix[i][i];
    }

    // Calculate sum of secondary diagonal (from top-right to bottom-left)
    for(i = 0; i < 3; i++) 
    {
        secondary_diagonal_sum += matrix[i][2-i];
    }

    printf("Sum of primary diagonal: %d\n", primary_diagonal_sum);
    printf("Sum of secondary diagonal: %d\n", secondary_diagonal_sum);

    return 0;
}
