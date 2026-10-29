/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 20:47:56 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/28 21:53:10 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	printf("%d \n", ft_is_prime(13));
	printf("%d \n", ft_is_prime(-1));
	printf("%d \n", ft_is_prime(9));
} */
