#include<stdio.h>
int prime(int n);
int main()
{
    int n , ctr=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("\nThe prime factors of %d are: " , n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            ctr=prime(i);
            if(ctr==0)
            {
                printf("%d" "  ", i);
            }
            
        }
    }
}
int prime(int n)
{
    int ctr=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            ctr++;
    }
    return ctr;
}