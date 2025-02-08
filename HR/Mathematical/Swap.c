#include<stdio.h>
int main() 
{
    int a,b;
    printf("Enter the values of a and b respectively: ");
    scanf("%d%d",&a,&b);
    a+=b;
    b=a-b;
    a-=b;
    printf("After swap the value of a and b are %d , and  %d respectively",a ,b);
    return 0;
}
