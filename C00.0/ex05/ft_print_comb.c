/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:26:29 by lpesaro           #+#    #+#             */
/*   Updated: 2022/09/11 23:41:53 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{	
	write (1, &c, 1);
}

void	ft_putchar_multiple(char a, char b, char c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (a != 7 || b != 8 || c != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a1;
	int	a2;
	int	a3;

	a1 = 0;
	while (a1 <= 7)
	{
		a2 = a1 + 1;
		while (a2 <= 8)
		{
			a3 = a2 + 1;
			while (a3 <= 9)
			{
				ft_putchar_multiple(a1, a2, a3);
				a3++;
			}
			a2++;
		}
		a1++;
	}
}
