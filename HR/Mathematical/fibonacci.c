#include <stdio.h>

int main() 
{
    int a=0, b=1, sum=0;
    for(int i=1;i<=10;i++)
    {
         printf("%d,",a);
         sum=a+b;
         a=b;
         b=sum;
    }
   

    return 0;
}