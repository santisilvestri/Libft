/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:23:35 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/26 16:21:15 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	str1[20] = "Hello World";
	char	str2[20] = "Hello World";

	printf("ft_bzero: %s\n", str1);
	printf("bzero:    %s\n", str2);

	return (0);
}