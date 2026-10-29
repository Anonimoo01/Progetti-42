/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 18:54:55 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/28 20:24:24 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*  int	main(void)
{
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(-2));
	printf("%d \n", ft_fibonacci(0));
	printf("%d \n", ft_fibonacci(8));
} */
