/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:10:13 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/28 18:30:16 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* int	main(void)
{
	printf("%d \n", ft_recursive_factorial(5));
	printf("%d \n", ft_recursive_factorial(6));
	printf("%d \n", ft_recursive_factorial(-1));
	printf("%d \n", ft_recursive_factorial(0));
} */
