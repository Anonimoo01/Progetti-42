/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 19:07:18 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/25 19:21:52 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/* int main()
{
	char str1[] = "ciao";
	char str2[] = "abcdefghijklmnopqrstuvwxyz";
	char str3[] = "AbCdEf";
	char str4[] = "CIAO";
	char str5[] = "ciao123";
	char str6[] = "ciao mondo!";
	char str7[] = "";
	char str8[] = "12345";
	char str9[] = "z";
	char str10[] = "àè";

	printf("Minuscole: %s\n", ft_strupcase(str1));
	printf("Alfabeto completo: %s\n", ft_strupcase(str2));
	printf("Stringa mista: %s\n", ft_strupcase(str3));
	printf("Gia maiuscole: %s\n", ft_strupcase(str4));
	printf("Lettere e numeri: %s\n", ft_strupcase(str5));
	printf("Spazi e simboli: %s\n", ft_strupcase(str6));
	printf("Stringa vuota: '%s'\n", ft_strupcase(str7));
	printf("Solo numeri: %s\n", ft_strupcase(str8));
	printf("Ultima minuscola: %s\n", ft_strupcase(str9));
	printf("Accenti: %s\n", ft_strupcase(str10));
} */
