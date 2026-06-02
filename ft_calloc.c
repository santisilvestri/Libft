/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:07:43 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/01 12:06:05 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total;
	unsigned char	*str;
	size_t			i;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	str = (unsigned char *)ptr;
	i = 0;
	while (i < total)
	{
		str[i] = 0;
		i++;
	}
	return (ptr);
}

/* #include<stdio.h>

int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Error al reservar memoria\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
} */