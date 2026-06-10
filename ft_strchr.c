/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:53:31 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/05 15:53:16 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/* int	main(void)
{
	char str[] = "Hello world";

	printf("Case 1: search for = 'o'\n");
	printf("strchr:    %s\n", strchr(str, 'o'));
	printf("ft_strchr: %s\n", ft_strchr(str, 'o'));
	printf("\nCase 2: search for = 'z'\n");
	printf("strchr:    %p\n", strchr(str, 'z'));
	printf("ft_strchr: %p\n", ft_strchr(str, 'z'));
	printf("\nCase 3: search for = '\\0'\n");
	printf("strchr:    %p\n", strchr(str, '\0'));
	printf("ft_strchr: %p\n", ft_strchr(str, '\0'));
	return (0);
} */