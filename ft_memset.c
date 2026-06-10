/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:23:15 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/05 12:02:52 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char str1[20] = "Hello world";
	char str2[20] = "Hello world";

	memset(str1, 'X', 4);
	ft_memset(str2, 'X', 4);
	printf("memset:    %s\n", str1);
	printf("ft_memset: %s\n", str2);

	return (0);
} */