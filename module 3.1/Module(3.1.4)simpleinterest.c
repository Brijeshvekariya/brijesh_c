<<<<<<< HEAD
#include<stdio.h>

int main()
{
	int amount,interest,time,SI;
	printf("Enter the Principal amount :- ");
	scanf("%d",&amount);
	printf("Enter the Rate of Interest in %% :- ");
	scanf("%d",&interest);
	printf("Enter the time/duration in years :- ");
	scanf("%d",&time);
	SI = amount*interest*time/100;
	printf("Simple Interest of given data is :- %d \n",SI);
	printf("Total amount to be paid after %d years is :- %d",time,SI+amount);

=======
#include<stdio.h>

int main()
{
	int amount,interest,time,SI;
	printf("Enter the Principal amount :- ");
	scanf("%d",&amount);
	printf("Enter the Rate of Interest in %% :- ");
	scanf("%d",&interest);
	printf("Enter the time/duration in years :- ");
	scanf("%d",&time);
	SI = amount*interest*time/100;
	printf("Simple Interest of given data is :- %d \n",SI);
	printf("Total amount to be paid after %d years is :- %d",time,SI+amount);

>>>>>>> 24210c86924efb37a76d61aba59281c0f1d5cfc8
}