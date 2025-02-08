#include <stdio.h>
int main() 
{
    int a,b,lcm;
    printf("enter two values:");
    scanf("%d %d", &a,&b);
    for(int i=1;i<=b;i++)
    {
        if(a*i%b==0)
        {
        lcm=a*i;
        break;
        }
    }
    printf("\n%d",lcm);
    return 0;
}