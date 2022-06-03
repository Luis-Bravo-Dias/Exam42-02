/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:19:33 by lleiria-          #+#    #+#             */
/*   Updated: 2022/06/03 12:36:59 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	z;
	int	oct;

	z = 128;
	oct = octet;
	while (z > 0)
	{
		if (z & oct)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		z = z >> 1;
	}
}

int	main(void)
{
	print_bits(4);
	write(1, "\n", 1);
	return (0);
}
