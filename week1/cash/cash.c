#include <stdio.h>

int main(void)
{
	int twenty_five = 25;
	int ten = 10;
	int five = 5;
	int one = 1;
	int count = 0;

	int cash;
	printf("Change owed: ");
	scanf("%i", &cash);
	while (cash >= twenty_five)
	{
		cash -= 25;
		count++;
	}
	while (cash >= ten)
    {
        cash -= 10;
		count++;
    }
	while (cash >= five)
    {
		cash -= 5;
		count++;
    }
	while (cash >= one)
    {
		cash -= 1;
		count++;
    }
	printf("%i", count);
}
