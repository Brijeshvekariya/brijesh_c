#include<stdio.h>

int total=0,n;
int sum(int n)
{
	if(n<0)
	{
		n= -n;
	}
	while(n>0)
	{
		int remainder;
		remainder = n%10;
		total+=remainder;
		n = n/10;
	}
	printf("Total of all digit is %d",total);
}
int main()
{
	printf("Enter any number to find out Total of all digit : ");
	scanf("%d",&n);
	sum(n);
}