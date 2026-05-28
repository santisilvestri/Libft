/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:25:10 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/27 09:50:56 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hola mundo";
	char	dst1[10];
	char	dst2[10];

	ft_memcpy(dst1, src, 5);
	memcpy(dst2, src, 5);

	printf("ft_memcpy: %s\n", dst1);
	printf("memcpy:    %s\n", dst2);

	return (0);
} */