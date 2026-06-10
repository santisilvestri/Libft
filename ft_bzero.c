/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:23:35 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/05 12:15:05 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/* int	main(void)
{
	char str1[] = "Home";
	char str2[] = "Home";

	ft_bzero(str1, 2);
	bzero(str2, 2);
	printf("ft_bzero: %d %d %c %c\n", str1[0], str1[1], str1[2], str1[3]);
	printf("bzero:    %d %d %c %c\n", str2[0], str2[1], str2[2], str2[3]);
	return (0);
} */