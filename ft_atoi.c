/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:32:58 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/01 12:01:32 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sig;
	int	num;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	sig = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sig = -sig;
		i++;
	}
	num = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * sig);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[]= "     -456845641";

	printf("%d", ft_atoi(str));
	return(0);
} */
