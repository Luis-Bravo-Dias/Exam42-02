#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(char *str)
{
	int	n;
	int	factor;
	int	first;

	n = atoi(str);
	factor = 2;
	first = 1;

	if (n == 1)
		printf("1");
	while (factor <= n)
	{
		if (n % factor == 0 && is_prime(factor))
		{
			if (first == 1)
				printf("%d", factor);
			else
				printf("*%d", factor);
			first = 0;
			n /= factor;
		}
		else
			factor++;
	}
}

int	main(int ac, char **av)
{

	if (ac == 2)
		fprime(av[1]);
	printf("\n");
	return (0);
}