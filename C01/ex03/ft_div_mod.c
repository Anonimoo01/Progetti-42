/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etenuzzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:32:33 by etenuzzo          #+#    #+#             */
/*   Updated: 2026/10/13 22:30:38 by etenuzzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main()
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 10;
	b = 5;
	printf("operazione %d %d \n", a, b);
	ft_div_mod(a, b, &c, &d);
	printf("Risultato %d %d \n", c, d);
} */

/* int	a; questo e il dividendo
   int	b; questo e il divisore
   int	c; risultato
   int	d; resto
*/
