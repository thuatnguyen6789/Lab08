#include <stdio.h>
int main ()
{
	int user = 2701;
	int pass = 1990;
	int selection;
	int balance = 1000;
	int amount;
	char ans;
	
	printf("Enter your username: ");
	scanf("%d", &user);
	if (user == 2701)
	{
		printf("Enter your password: ");
		scanf("%d", &pass);
		if (pass == 1990)
		{
			printf("\n 1. Withdrawal");
			printf(" \n 2. Display balance");
			printf("\n 3. Transfer");
			printf("\n 4. Stop");
			
			printf("\n Your selection is: ");
			scanf("%d", &selection);
			
			if (selection == 1)
			printf("Enter Amount: ");
			scanf("%d", &amount);
			
			if (amount >= 5 && amount <= 50 && amount % 5 == 0)
			{
				printf("\n Your transaction will charge some fee");
				printf("\n Do you want to continue? Y/N");
				scanf("%c", &ans);
				
				if (ans == 'Y')
				{
					printf("\n Your new balance is %d:", balance - amount - 1);
				}
				else
				
				printf("Stop");
			
			}
			else 
			printf("Invalid amount, It must be a multiple of 5 and less than 50");
			
			
		}
		else
		printf("Incorrect Password");
	}
	else
	printf("Incorrect Username");
	
	return 0;
}
