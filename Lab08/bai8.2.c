#include <stdio.h>
int main ()
{
	char name[100];
	int i;
	char ans;
	
	printf("What's your name: ");
	gets(name);
	for (i = 0; i < 100; i++)
	printf("\n Fall in love %s time %d", name, i+1);
	do {
		printf("\n Do you love me? Y/N ");
		scanf("%s", &ans);
	} while (ans != 'Y');
	printf("Thanh cong roi");
}
