#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,sum=0.0;
    printf("Enter the number of terms and the vale of X \n");
    scanf("%d%d",&n,&x);
	for (int i=1;i<=n;i++)
	{
	    int calc=(i)*(pow(x,i));
		if(i%2==0)
		   {
		      sum-=calc;
    	   }
    	   else
    	   {
		      sum+=calc;
    	   }
	}
	printf("The sum of the series is :%d",sum);
	return 0;
}