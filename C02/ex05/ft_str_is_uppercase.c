/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:44:19 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/25 18:08:04 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/* int main()
{
	printf("Maiuscole: %d\n", ft_str_is_uppercase("ABC"));
	printf("Alfabeto completo: %d\n", ft_str_is_uppercase
	("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("Stringa vuota: %d\n", ft_str_is_uppercase(""));
	printf("Minuscole: %d\n", ft_str_is_uppercase("abc"));
	printf("Mista: %d\n", ft_str_is_uppercase("AbC"));
	printf("Numeri: %d\n", ft_str_is_uppercase("123"));
	printf("Lettere e numeri: %d\n", ft_str_is_uppercase("ABC123"));
	printf("Carattere speciale: %d\n", ft_str_is_uppercase("ABC!"));
	printf("Spazio: %d\n", ft_str_is_uppercase("A B"));
	printf("Prima maiuscola: %d\n", ft_str_is_uppercase("A"));
	printf("Ultima maiuscola: %d\n", ft_str_is_uppercase("Z"));
	printf("Carattere prima di A: %d\n", ft_str_is_uppercase("@"));
	printf("Carattere dopo Z: %d\n", ft_str_is_uppercase("["));	
} */
