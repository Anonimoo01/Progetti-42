/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 21:27:39 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/15 22:52:18 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(int ac, char **av)
{
	if (ac == 2)
		printf("Giusto %d", ft_str_is_alpha(av[1]));
	return (0);
} */
