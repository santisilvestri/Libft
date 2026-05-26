/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:21:33 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/26 15:40:39 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* #include<stdio.h>

int	main(void)
{
	char c;

	printf("Enter a char: ");
	scanf("%c", &c);
	printf("%d",ft_isdigit(c));
	return(0);
} */