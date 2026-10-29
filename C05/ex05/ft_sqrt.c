/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 20:46:58 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/28 21:23:45 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= -1)
		return (0);
	while (i * i < nb)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (2);
}

/* int	main(void)
{
	printf("%d \n", ft_sqrt(3));
	printf("%d \n", ft_sqrt(-1));
	printf("%d \n", ft_sqrt(17));
	printf("%d \n", ft_sqrt(16));
} */
