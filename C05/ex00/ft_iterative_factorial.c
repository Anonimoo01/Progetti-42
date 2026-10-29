/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:28:03 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/28 18:07:39 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/* int	main(void)
{
	printf("%d \n", ft_iterative_factorial(5));
	printf("%d \n", ft_iterative_factorial(6));
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d \n", ft_iterative_factorial(-1));
} */
