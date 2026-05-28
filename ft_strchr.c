/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:53:31 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/28 15:23:52 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
	int i;
	
	i=0;
	while(s[i])
	{
		if(s[i] == c)
			return((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return(NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str;
	char	*result;

	str = "Hola mundo";

	result = ft_strchr(str, 'l');

	if (result != NULL)
		printf("Caracter encontrado: %c\n", *result);
	else
		printf("Caracter no encontrado\n");

	return (0);
} */