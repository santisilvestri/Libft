/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:33:43 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/01 12:00:06 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* int	main(void)
{
	char	*original;
	char	*copia;

	original = "Hola mundo";
	copia = ft_strdup(original);

	if (!copia)
	{
		printf("Error al reservar memoria\n");
		return (1);
	}

	printf("Original: %s\n", original);
	printf("Copia: %s\n", copia);

	free(copia);
	return (0);
} */