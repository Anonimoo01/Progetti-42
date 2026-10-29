/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 21:13:00 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/12 18:53:12 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter;

	if (n < 0)
	{
		letter = 'N';
	}
	else
	{
		letter = 'P';
	}
	write(1, &letter, 1);
}

/* int	main(void)
{
	ft_is_negative(10);
	return (0);
} */
