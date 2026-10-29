/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:02:04 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/26 20:16:39 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/* int main()
{
	unsigned int n;
	n = 5;
	char s1[] = "Ci";
	char s2[] = "Ciao";
	printf("%d", ft_strncmp(s1, s2, n));
} */
