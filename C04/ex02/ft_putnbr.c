/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:56:38 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/27 22:02:51 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* #include <unistd.h> */

void	al(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	al((n % 10) + '0');
}

/* int main()
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-123);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	return(0);
} */
