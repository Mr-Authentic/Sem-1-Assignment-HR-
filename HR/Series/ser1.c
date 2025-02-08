#include<stdio.h>
#include<math.h>
int main()
{
    int n,x; float sum=0.0;
    printf("Enter the number of terms and the vale of X \n");
    scanf("%d%d",&n,&x);
	for (int i=1;i<=n;i++)
	{
	    float calc=(1.0/i)*(pow(x,i));
		if(i%2==0)
		   {
		      sum-=calc;
    	   }
    	   else
    	   {
		      sum+=calc;
    	   }
	}
	printf("The sum of the series is :%f",sum);
	return 0;
}