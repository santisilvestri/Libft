/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:45:39 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/01 12:08:28 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((s1[i] != s2[i]) || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hola mundo";
	char	str2[] = "Hola munde";

	printf("n = 4: %d\n", ft_strncmp(str1, str2, 4));
	printf("n = 10: %d\n", ft_strncmp(str1, str2, 10));
	printf("n = 0: %d\n", ft_strncmp(str1, str2, 0));

	return (0);
} */