/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:00:39 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/01 12:06:38 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *litte, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (litte[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == litte[j] && big[i + j] && litte[j] && (i
				+ j) < len)
			j++;
		if (litte[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/* #include<stdio.h>

int	main(void)
{
	char str1[]= "Hola mundo";
	char str2[]= "";
	char *result;

	result = ft_strnstr(str1,str2,10);

	if(result != NULL)
		printf("Encontrado: %s\n", result);
	else
		printf("No encontrado \n");
	return(0);
} */