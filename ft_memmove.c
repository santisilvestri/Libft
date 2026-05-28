/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:54:17 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/27 10:43:03 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
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
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcdef";

	printf("Antes str1: 		%s\n", str1);
	printf("Despuest str2:    %s\n", str2);


	ft_memmove(str1 + 1, str1, 2);
	memmove(str2 + 1, str2, 2);

	printf("ft_memmove: %s\n", str1);
	printf("memmove:    %s\n", str2);

	return (0);
} */
