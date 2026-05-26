/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:21:59 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/26 13:28:21 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
				&& c <= '9')))
		return (1);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char	c;

	printf("Enter a char:");
	scanf("%c", &c);
	printf("%d\n", ft_isalnum(c));
	return (0);
} */
