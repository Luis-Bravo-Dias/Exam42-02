/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:29:18 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/20 11:49:49 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int main()
{
	int a = 13;
	int b = 12;
	ft_swap(&a, &b);
	printf("The value of a is %d && b is %d", a, b);
	return 0;
 }
 