#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print out the change that needs to given
 * @argc: number of arguments to be passed
 * @argv: number of variables to calculate
 * Return: always 0 for sucess
 */
int main(int argc, char **argv)
{
	int total, change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argc[1]);
	for (total = 0; change > 0; total++)
	{
		switch (change)
		{
			case 25:
				change -= 25;
				break;
			case 10:
				change -= 10;
				break;
			case 5:
				change -= 5;
				break;
			case 2:
				change -= 2;
				break;
			case 1:
				change -= 1;
				break;
			default:
				printf("Invalid change amout\n");
				return (1);
		}
	}
	printf("%d\n", total);
	return (0);
}

