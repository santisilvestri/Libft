/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 08:25:23 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/05 16:55:28 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;
	size_t				i;

	i = 0;
	str = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char str[] = "Hello world";

	printf("memchr:    %p\n", memchr(str, 'w', 11));
	printf("ft_memchr: %p\n", ft_memchr(str, 'w', 11));
	printf("memchr:    %s\n", (char *)memchr(str, 'w', 11));
	printf("ft_memchr: %s\n", (char *)ft_memchr(str, 'w', 11));
	return (0);
} */