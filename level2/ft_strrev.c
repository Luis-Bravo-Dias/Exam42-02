/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:16:38 by lleiria-          #+#    #+#             */
/*   Updated: 2022/06/09 11:40:46 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		rev;
	char	tmp;

	i = 0;
	rev = 0;
	while (str[rev])
		rev++;
	rev--;
	while (i < rev)
	{
		tmp = str[i];
		str[i] = str[rev];
		str[rev] = tmp;
		i++;
		rev--;
	}
	return (str);
}

int     main()
{
    char s[6] = "asdfg";

    printf("%s", ft_strrev(s));
}
