#include<stdio.h>

int main()
{
	int i,n,j,a;
	printf("Enter numbers of rows : ");
	scanf("%d",&n);
	a = n;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("  ");
		}
		for(int k = a*2 - 1;k>=1;k-- )
		{
			printf("* ");
		}
		a -=1;
		printf("\n");
	}
}