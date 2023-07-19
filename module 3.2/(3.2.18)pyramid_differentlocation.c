#include<stdio.h>

int main()
{
	int k,i,n,j,a;
	printf("Enter numbers of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
		k = i*2 - 1; 
		for(j=n;j>=k-3;j--)
		{
			printf(" ");
		}
		for(int j=1 ;j<=k;j++ )
		{
			printf("* ");
		}
		printf("\n");
	}
}