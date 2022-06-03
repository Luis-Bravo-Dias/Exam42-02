/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:30:12 by lleiria-          #+#    #+#             */
/*   Updated: 2022/06/03 10:23:17 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	operator(int a, char o, int b)
{
	if (o == '*')
		return (a * b);
	else if (o == '+')
		return (a + b);
	else if (o == '/')
		return (a / b);
	else if (o == '-')
		return (a - b);
	else if (o == '%')
		return (a % b);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%d", operator(atoi(av[1]), *av[2], atoi(av[3])));
	}
	printf("\n");
	return (0);
}
