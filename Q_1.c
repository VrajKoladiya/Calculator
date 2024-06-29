#include<stdio.h>

/*

Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
is pressed.

Example:
Input/Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 0

*/

float addison(float a, float b)
{
	return a + b;
}
float subtraction(float a, float b)
{
	return a - b;
}
float multiply(float a, float b)
{
	return a * b;
}
float divide(float a, float b)
{
	return a / b;
}
float modular(int a, int b)
{
	return a % b;
}
int main()
{
	int choice;
	float n1, n2, answer;
	
	do
	{
		printf("Press 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %%\n");
		printf("Press 0 for the exit\n");
		
		printf("Enter your choice = ");
		scanf("%d",&choice);
		
		if(choice == 0)
		{
			printf("\nExiting the program.");
			break;
		}
		else if(choice>=1 && choice<=5)
		{
			printf("\nEnter the first number = ");
			scanf("%f",&n1);
			printf("Enter the second number = ");
			scanf("%f",&n2);
			
			switch(choice)
			{
				case 1:
					answer = addison(n1, n2);
					printf("Addition of %.2f and %.2f is %.2f\n",n1 , n2 ,answer);
					break;
				case 2:
					answer = subtraction(n1, n2);
					printf("Subtraction of %.2f and %.2f is %.2f\n",n1 , n2 ,answer);
					break;
				case 3:
					answer = multiply(n1, n2);
					printf("Multiply of %.2f and %.2f is %.2f\n",n1 , n2 ,answer);
					break;
				case 4:
					answer = divide(n1, n2);
					printf("Divide of %.2f and %.2f is %.2f\n",n1 , n2 ,answer);
					break;
				case 5:
					answer = modular(n1, n2);
					printf("Modular of %.2f and %.2f is %.2f\n",n1 , n2 ,answer);
					break;
			}
		}
		else
		{
			printf("\nPly Enter proper number");
		}
		printf("\n-------------------------------------------------------------------------------\n\n");
	}
	while(1);
	
	return 0;
}