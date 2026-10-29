/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:45:45 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/27 18:16:56 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*  #include <stdio.h> */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (NULL);
}

/* int main()
{
	char str[] = "aaaab";
	char to_find[] = "aab";
	printf("%s", ft_strstr(str, to_find));
} */
