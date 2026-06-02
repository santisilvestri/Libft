/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:23:35 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/01 12:03:02 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
/* #include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	str1[] = "Hola";
	char	str2[] = "Hola";

	ft_bzero(str1, 2);
	bzero(str2, 2);

	printf("ft_bzero: %d %d %c %c\n", str1[0], str1[1], str1[2], str1[3]);
	printf("bzero:    %d %d %c %c\n", str2[0], str2[1], str2[2], str2[3]);

	return (0);
} */