#include <stdio.h>

int main(){
    
    int m1,n1,x;
    printf("Enter how many rows: ");
    scanf("%d",&m1);
    printf("Enter how many columns: ");
    scanf("%d",&n1);
    printf("column is already set.\nEnter how many rows of matrix 2: ");
    scanf("%d",&x);

    float arr1[m1][n1];
    float arr2[x][m1];
    float multi[m1][n1];

        /* for matrix 1 */
    printf("Enter the rows and columns of matrix 1\n");
        for (int row=0; row<m1; row++){
            for (int col=0; col<n1; col++){
            scanf("%f",&arr1[row][col]);
            }
        }
        /* for matrix 2 */
    printf("Enter the rows and columns of matrix 2\n");
        for (int row=0; row<x; row++){
            for (int col=0; col<m1; col++){
            scanf("%f",&arr2[row][col]);
            }
        }

        /* initilize storable matrix by 0.0 */
        for (int row=0; row<m1; row++){
            for (int col=0; col<n1; col++){
                    multi[row][col]=0.0;
            }
        }
        /* calculation */
        for (int row=0; row<m1; row++){
            for (int col=0; col<n1; col++){
                    multi[row][col]+=arr1[row][col]*arr2[col][row];
            }
        }
     printf("The multiplied array: \n");
        for (int row=0; row<m1; row++){
            for (int col=0; col<n1; col++){
                printf("%.2f ",multi[row][col]);
            }
            printf("\n");     
            }
        return 0;
}

