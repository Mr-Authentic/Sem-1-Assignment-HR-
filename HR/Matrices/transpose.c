#include <stdio.h>

int main() {
    int m[3][3], tr[3][3], i, j;
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &m[i][j]);
        }
    }
    // Calculate transpose
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            tr[j][i] = m[i][j];
        }
    }
    printf("Original Matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("transpose of Matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", tr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
