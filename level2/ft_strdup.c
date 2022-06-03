/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:00:07 by lleiria-          #+#    #+#             */
/*   Updated: 2022/06/03 12:16:58 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	n;

	n = 0;
	if (!str)
		return (n);
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		n;
	int		len;

	len = ft_strlen(src);
	ptr = malloc(sizeof(char) * (len + 1));
	n = 0;
	if (!ptr)
		return ;
	while (src[n])
	{
		ptr[n] = src[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
