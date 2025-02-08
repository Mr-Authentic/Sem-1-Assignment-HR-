#include<stdio.h>
int main()
{
    int n; float sum=0.0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
	    float calc=1;
        for(int j=1;j<=i;j++)
    	   {
		    calc*=j;
    	   }
        sum+=(i/calc);
	}
	printf("\nThe sum of the series is : %.3f",sum);
	return 0;
}