#include <stdio.h>

int change_owed(int budget);
int main(void)
{
	int cash;
	do
	{
	printf("Change owed: ");
	scanf("%i", &cash);
	} while (cash < 0);

	int coin = change_owed(cash);
	printf("%i\n", coin);
}

int change_owed(int budget)
{
	int twenty_five = 25;
	int ten = 10;
	int five = 5;
	int one = 1;

	int count = 0;

	count += budget / twenty_five;
	budget %= twenty_five;

	count += budget / ten;
	budget %= ten;

	count += budget / five;
	budget %= five;

	count += budget / one;

	return count;
}
