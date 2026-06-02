/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasilves <sasilves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:24:46 by sasilves          #+#    #+#             */
/*   Updated: 2026/06/02 16:36:44 by sasilves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	char c;
	long l;

	l = n;
	if(n < 0)
	{
		write(fd, "-", 1);
		l = -l;
	}
	if(l >= 10)
	{
		ft_putnbr_fd(l/10, fd);
	}
	c = (l % 10) + '0';
	write(fd, &c, 1);
}

int main(void)
{
	int n;

	n = -563325;
	ft_putnbr_fd(n, 1);
	return(0);
}
