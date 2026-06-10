/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:54:17 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/10 09:40:48 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/* int	main(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcdef";

	printf("Antes str1: 	%s\n", str1);
	printf("Despues str2:   %s\n", str2);
	ft_memmove(str1 + 2, str1, 3);
	memmove(str2 + 2, str2, 3);
	printf("ft_memmove: 	%s\n", str1);
	printf("memmove:	%s\n", str2);
	return (0);
} */
