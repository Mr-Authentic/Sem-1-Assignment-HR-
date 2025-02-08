#include<stdio.h>
int main() 
{
    int n,ctr=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            ctr++;
    }
    if (ctr==0) 
        printf("%d is a prime number", n);
    else 
       printf("%d is not a prime number", n);
    return 0;
}
