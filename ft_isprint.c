/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:22:41 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/01 12:02:37 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('9'));
	return (0);
} */