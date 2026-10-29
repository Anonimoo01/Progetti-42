/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 18:20:23 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/25 19:04:14 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/* int main()
{
	printf("Testo normale: %d\n", ft_str_is_printable("Ciao 42! @#[]{}+-_=."));
	printf("Stringa vuota: %d\n", ft_str_is_printable(""));
	printf("Solo lettere: %d\n", ft_str_is_printable("AbcXYZ"));
	printf("Solo numeri: %d\n", ft_str_is_printable("0123456789"));
	printf("Solo spazi: %d\n", ft_str_is_printable("   "));
	printf("Spazio iniziale: %d\n", ft_str_is_printable(" Ciao"));
	printf("Tabulazione: %d\n", ft_str_is_printable("Ciao\t42"));
	printf("Nuova riga: %d\n", ft_str_is_printable("Ciao\n42"));
	printf("ASCII 31: %d\n", ft_str_is_printable("\x1F"));
	printf("ASCII 32: %d\n", ft_str_is_printable(" "));
	printf("ASCII 126: %d\n", ft_str_is_printable("~"));
	printf("ASCII 127: %d\n", ft_str_is_printable("\x7F"));
} */
