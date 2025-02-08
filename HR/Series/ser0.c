#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++)
    {   
        sum+=i;
    }
    printf("The Sum of %d integers is: %d",n ,sum);
    return 0;
}