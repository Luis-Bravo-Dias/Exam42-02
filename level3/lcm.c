#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

int	main(void)
{
	int val;

	val = lcm(50, 20);
	printf("val = %d\n", val);
	return (0);
}