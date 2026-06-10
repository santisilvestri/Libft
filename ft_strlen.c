/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:22:58 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/05 11:38:23 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* int	main(void)
{
	char *str = "Hello World";

	printf("strlen:    %zu\n", strlen(str));
	printf("ft_strlen: %zu\n", ft_strlen(str));
	return (0);
} */