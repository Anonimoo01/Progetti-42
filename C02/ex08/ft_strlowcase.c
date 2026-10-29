/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 19:30:13 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/25 19:39:48 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/* int main()
{
	char str1[] = "CIAO";
	char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str3[] = "AbCdEf";
	char str4[] = "ciao";
	char str5[] = "CIAO123";
	char str6[] = "CIAO MONDO!";
	char str7[] = "";
	char str8[] = "12345";
	char str9[] = "Z";
	char str10[] = "ÀÈ";

	printf("Maiuscole: %s\n", ft_strlowcase(str1));
	printf("Alfabeto completo: %s\n", ft_strlowcase(str2));
	printf("Stringa mista: %s\n", ft_strlowcase(str3));
	printf("Gia minuscole: %s\n", ft_strlowcase(str4));
	printf("Lettere e numeri: %s\n", ft_strlowcase(str5));
	printf("Spazi e simboli: %s\n", ft_strlowcase(str6));
	printf("Stringa vuota: '%s'\n", ft_strlowcase(str7));
	printf("Solo numeri: %s\n", ft_strlowcase(str8));
	printf("Ultima maiuscola: %s\n", ft_strlowcase(str9));
	printf("Accenti: %s\n", ft_strlowcase(str10));
} */
