#include <stdio.h>
int main()
{
    int a[5], i, x;
    printf("Enter the elements:\n");
    for (i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<5/2; i++)
    {
        x=a[i];
        a[i]=a[5-i-1];
        a[5-i-1]=x;
    }
    
    printf("Elements of array in Reverse Order:");
    for (i=0; i<5; i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}