#include <stdio.h>

int main(){
    int m,n;
    printf("Enter how many rows: ");
    scanf("%d",&m);
    printf("Enter how many columns: ");
    scanf("%d",&n);

    float arr1[m][n];
    float arr2[m][n];
    float add[m][n];

    //for matrix 1
    printf("Enter the rows and columns of matrix 1\n");
    for (int row=0; row<m; row++){
        for (int col=0; col<n; col++){
        scanf("%f",&arr1[row][col]);
        }
    }
    //for matrix 2
    printf("Enter the rows and columns of matrix 2\n");
    for (int row=0; row<m; row++){
        for (int col=0; col<n; col++){
        scanf("%f",&arr2[row][col]);
        }
    }

    for (int row=0; row<m; row++){
        for (int col=0; col<n; col++){
            add[row][col]=arr1[row][col] + arr2[row][col]; 
        }
    }
    printf("The added matrix is: \n");
    for (int row=0; row<m; row++){
        for (int col=0; col<n; col++){
            printf("%.2f ",add[row][col]);
        }
        printf("\n");
    }
    printf("\n");  
    return 0;
}