/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:45:42 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/28 14:52:45 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return(c);
}

#include<unistd.h>

int	main(void)
{
	char c;

	c = ft_tolower('J');
	write(1, &c, 1);
	return(0);
}