#include<stdio.h>

int main()
{
	int i,n,j;
	printf("Enter numbers of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" * ");
		}
		printf("\n");
	}
}