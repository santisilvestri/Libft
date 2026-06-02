/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:05:52 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/01 14:49:46 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;
	size_t	sub_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		sub_len = 0;
	else if (len > s_len - start)
		sub_len = s_len - start;
	else
		sub_len = len;
	sub = malloc(sizeof(char) * (sub_len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/* #include <stdio.h>

int	main(void)
{
	char *sub;

	sub = ft_substr("hola mundo", 20, 20);
	if (!sub)
		return (1);
	printf("Resultado: %s\n", sub);
	free(sub);
	return (0);
} */