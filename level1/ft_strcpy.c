/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:50:09 by lleiria-          #+#    #+#             */
/*   Updated: 2022/05/20 11:07:46 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s2[n])
	{
		s1[n] = s2[n];
		n++;
	}
	s1[n] = '\0';
	return (s1);
}

int main()
{
	char text1[] = "12345";
	char text2[] = "abcde";
	strcpy(text1, text2);
	printf("%s\n", text1);
	char text3[] = "12345";
	char text4[] = "abcde";
	ft_strcpy(text3, text4);
	printf("%s\n", text3);
}