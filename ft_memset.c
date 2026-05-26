/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:23:15 by sasilves          #+#    #+#             */
/*   Updated: 2026/05/26 16:04:39 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long i;
	unsigned char *ptr;
	
	i = 0;
	ptr = (unsigned char *)s;
	while(i < n)
	{
		ptr[i]= c;
		i++;
	}
	return (ptr);
}

/* #include <stdio.h>

int main (void)
{
	char str[] = "Hello World";
	char str1[] = "Hello World";
	memset(str, 'x', 3);
	ft_memset(str1, 'x', 5);
	printf("%s\n", str);
	printf("%s\n", str1);
} */
