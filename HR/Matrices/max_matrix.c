
#include <stdio.h>

int main() 
{
    int matrix[3][3], i, j, max;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            if(matrix[i][j] > max) 
            {
                max = matrix[i][j];
            }
        }
    }

    printf("Largest number in the matrix: %d\n", max);

    return 0;
}