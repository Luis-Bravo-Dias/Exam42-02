/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:45:37 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/21 15:56:46 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*int	main(int ac, char **av)
{
	int	i;
	int	start;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == ' ' && av[1][i + 1] != ' ' && av[1][i + 1] != '\0')
				start = i + 1;
			i++;
		}
		while (av[1][start] != ' ' && av[1][start] != '\0')
		{
			write(1, &av[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}*/

int	ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (ft_isblank(av[1][i]))
			i--;
		while (av[1][i] && !ft_isblank(av[1][i]))
			i--;
		i++;
		while (av[1][i] && !ft_isblank(av[1][i]))
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}