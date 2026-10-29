/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:01:11 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/14 17:29:15 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* #include <stdio.h> */

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* int main()
{
	char *prove;
	prove = "eddaje";
	ft_putstr(prove);
} */
