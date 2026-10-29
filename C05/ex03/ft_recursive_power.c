/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:47:31 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/28 18:54:24 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>  */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* int	main(void)
{
	printf("%d \n", ft_recursive_power(5, 3));
	printf("%d \n", ft_recursive_power(3, -1));
	printf("%d \n", ft_recursive_power(5, 0));
} */
