/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 19:45:35 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/25 22:15:36 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	alphanumeric(char c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0
				|| !alphanumeric(str[i - 1])))
			str[i] = str[i] -32;
		else if ((i > 0 && (str[i] >= 'A' && str[i] <= 'Z') && (alphanumeric
					(str[i - 1]))))
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}

/* int main()
{
	char str1[] = "salut, comment tu vas? 42mots quarante-deux; cinquante+et+un";
	char str2[] = "ciao mondo!";
	char str3[] = "CIAO MONDO";
	char str4[] = "hELLO wORLD";
	char str5[] = "42ciao 123abc";
	char str6[] = "ciao-mondo+test";
	char str7[] = "";
	char str8[] = "a";
	char str9[] = "z9hello";
	char str10[] = "ciao\tmondo\nprova";

	printf("Subject: %s\n", ft_strcapitalize(str1));
	printf("Testo normale: %s\n", ft_strcapitalize(str2));
	printf("Gia maiuscolo: %s\n", ft_strcapitalize(str3));
	printf("Misto: %s\n", ft_strcapitalize(str4));
	printf("Numeri iniziali: %s\n", ft_strcapitalize(str5));
	printf("Punteggiatura: %s\n", ft_strcapitalize(str6));
	printf("Stringa vuota: '%s'\n", ft_strcapitalize(str7));
	printf("Una lettera: %s\n", ft_strcapitalize(str8));
	printf("Numero e lettere: %s\n", ft_strcapitalize(str9));
	printf("Tab e newline: %s\n", ft_strcapitalize(str10));
} */
