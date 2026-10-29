/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 22:19:02 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/25 17:42:29 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/* int main(void)
{
    printf("minuscole: %d\n", ft_str_is_lowercase("abc"));
    printf("alfabeto completo: %d\n", ft_str_is_lowercase
    ("abcdefghijklmnopqrstuvwxyz"));
    printf("stringa vuota: %d\n", ft_str_is_lowercase(""));
    printf("maiuscole: %d\n",ft_str_is_lowercase("ABC"));
    printf("mista: %d\n", ft_str_is_lowercase("Abc"));
    printf("numeri: %d\n", ft_str_is_lowercase("123"));
    printf("lettere e numeri: %d\n", ft_str_is_lowercase("abc123"));
    printf("carattere speciale: %d\n", ft_str_is_lowercase("abc!"));
    printf("spazio: %d\n", ft_str_is_lowercase("a b"));
    printf("ultima minuscola: %d\n", ft_str_is_lowercase("z"));
    printf("carattere dopo z: %d\n", ft_str_is_lowercase("{"));
} */
