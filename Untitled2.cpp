#include<stdio.h>

int main()
{

	char days;
	printf("enter day :- ");
	scanf("%c",&days);
	switch(days)
	{
		case 106:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		default :
			printf("Enter from 1 and 2");
			
	}
}