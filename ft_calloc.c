/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:07:43 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/06 10:08:07 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total;
	size_t			i;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

/* int	main(void)
{
	int *a;
	int *b;
	size_t i;

	a = ft_calloc(5, sizeof(int));
	b = calloc(5, sizeof(int));
	printf("ft_calloc: 	");
	i = 0;
	while (i < 5)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\ncalloc:		");
	i = 0;
	while (i < 5)
	{
		printf("%d ", b[i]);
		i++;
	}
	printf("\n");
	free(a);
	free(b);
	return (0);
} */