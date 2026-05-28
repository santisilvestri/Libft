/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:30:57 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/28 15:44:14 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

char *ft_strrchr(const char *s, int c)
{
	int i;
	
	i = 0;
	while(s[i])
		i++;
	while( i >= 0)
	{
		if(s[i]== (char)c)
			return((char *)&s[i]);
		i--;
	}
	return(NULL);
}

#include<stdio.h>

int	main(void)
{
	char	*str;
	char	*result;

	str = "Hola mundo";

	result = ft_strrchr(str, 'k');

	if (result != NULL)
	{
		printf("Caracter encontrado: %c\n", *result);
		printf("String desde la ultima aparicion: %s\n", result);
	}
	else
	{
		printf("Caracter no encontrado\n");
	}

	return (0);
}
