#include<stdio.h>

int main()
{
	int a,b,c,d,e,choice;
	int input1,input2;
	printf("Welcome to Simple Calculator \n");
	printf("\n");
	printf("Choice from below options :\n");
	printf("1. Addition \n2.Subtraction\n3.Multiplication \n4.Division \n5.modulo/remainder \n6.all \n");
	printf("Enter your choice :- ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter any two numbers :- ");
			scanf("%d %d",&input1,&input2);
			a= input1+input2;
			printf("Addition of %d and %d is %d\n",input1,input2,a);
			break;
		case 2:
			printf("Enter any two numbers :- ");
			scanf("%d %d",&input1,&input2);
			b= input1-input2;
			printf("Subtraction of %d and %d is %d\n",input1,input2,b);
			break;
		case 3:
			printf("Enter any two numbers :- ");
			scanf("%d %d",&input1,&input2);
			c= input1*input2;
			printf("Multiplication of %d and %d is %d\n",input1,input2,c);
			break;
		case 4:
			printf("Enter any two numbers :- ");
			scanf("%d %d",&input1,&input2);
			d= input1/input2;
			printf("Division of %d and %d is %d\n",input1,input2,d);
			break;
		case 5:
			printf("Enter any two numbers :- ");
			scanf("%d %d",&input1,&input2);
			e= input1%input2;
			printf("Modulo/remainder of %d and %d is %d\n",input1,input2,e);
			break;
		case 6:
			printf("Enter any two numbers :- ");
			scanf("%d %d",&input1,&input2);
			a= input1+input2;
			b= input1-input2;
			c= input1*input2;
			d= input1/input2;
			e= input1%input2;
			printf("Addition of %d and %d is %d\n",input1,input2,a);
			printf("Subtraction of %d and %d is %d\n",input1,input2,b);
			printf("Multiplication of %d and %d is %d\n",input1,input2,c);
			printf("Division of %d and %d is %d\n",input1,input2,d);
			printf("Modulo/remainder of %d and %d is %d\n",input1,input2,e);
			break;
		default:
			printf("Enter valid input");
	}
}