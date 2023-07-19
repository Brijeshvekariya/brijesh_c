#include<stdio.h>

int main()
{
	int choice,a,b;
	printf("Select from below options - \n\n");
	printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Modulo \n");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	printf("\nEnter First number : ");
	scanf("%d",&a);
	printf("Enter Second number : ");
	scanf("%d",&b);
	if(choice == 1)
	{
		printf("\nAddition of %d and %d is : %d",a,b,a+b);
	}
	else if(choice == 2)
	{
		printf("\nSubtraction of %d and %d is : %d",a,b,a-b);
	}
	else if(choice == 3)
	{
		printf("\nMultiplication of %d and %d is : %d",a,b,a*b);
	}
	else if(choice == 4)
	{
		printf("\nDivision of %d and %d is : %d",a,b,a/b);
	}
	else if(choice == 5)
	{
		printf("\nModulo/Remainder of %d and %d is : %d",a,b,a%b);
	}
	else
	{
		printf("\nEnter vallid option");
	}
}