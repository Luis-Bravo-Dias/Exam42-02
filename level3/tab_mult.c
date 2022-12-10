#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;
	
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (str[i] >= '0' && str[1] <= '9')
	{
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	return (n);
}

void	tab_mult(char *str)
{
	int	n;
	int	i;

	i = 1;
	n = ft_atoi(str);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}