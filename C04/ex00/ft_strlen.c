/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 18:52:44 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/27 18:54:00 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* int main()
{
	char *word = "ciaone";
	int a;
	a = ft_strlen(word);
	printf("N.c %d \n" , a);
} */
