/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:06:54 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/14 14:14:45 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / *b;
	*b = temp_a % *b;
}

/* int	main()
{
	int a;
	int b;

	a = 10; 
	b = 5;
	printf("operazione %d %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("risultato %d %d \n", a, b);
} */
