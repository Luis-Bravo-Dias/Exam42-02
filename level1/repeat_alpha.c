/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:53:46 by lleiria-          #+#    #+#             */
/*   Updated: 2022/06/17 10:21:46 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int		i;
	int		rep;
	char	c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if ((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z')
			{
				if (c >= 'a' && c <= 'z')
					rep = c - 'a';
				if (c >= 'A' && c < 'Z')
					rep = c - 'A';
				while (rep > 0)
				{
					write(1, &c, 1);
					rep--;
				}
			}
			write (1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
