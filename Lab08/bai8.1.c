#include <stdio.h>
int main ()
{
	int num1, num2;
	int i;
	
	printf("\n Enter num1: ");
	scanf("%d", &num1);
	printf("\n Enter num2: ");
	scanf("%d", &num2);
	
	if (num1 <= num2)
	{
		for (i = num1; i <= num2; i++)
		{
		if (i % 50 == 0)
		printf("%d\n", i);
		}
	}
	else
		
		for (i = num1; i >= num2; i--)
		{
		if (i % 50 == 0)
		printf("%d\n", i);
		}
		return 0;
}
