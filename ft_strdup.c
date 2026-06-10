/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:33:43 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/06 10:29:29 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* int	main(void)
{
	char	*text;
	char	*ft_copy;
	char	*copy;

	text = "Hello world";
	ft_copy = ft_strdup(text);
	copy = strdup(text);
	printf("Text:     	%s\n", text);
	printf("ft_strdup:	%s\n", ft_copy);
	printf("strdup:		%s\n", copy);
	free(ft_copy);
	free(copy);
	return (0);
} */