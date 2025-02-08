#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		if(i<=n/2)
		   {
		       for(int j=1;j<=i;j++)
		            printf("%d\t",j);
    	   }
    	   else
    	   {
		      for(int j=1;j<=n+1-i;j++)
		            printf("%d\t",j);
    	   }
		printf("\n");
	}
	return 0;
}