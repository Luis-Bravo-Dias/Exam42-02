#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet << i & 1) + '0';
	}
	return (bit);
}

int	main(void)
{
	unsigned char bit;
	unsigned char bit2;

	bit = 00100110;
	bit2 = reverse_bits(bit);
	printf("%c\n", bit2);

	write(1, "\n", 1);
	return (0);
}