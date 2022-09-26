/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:09:01 by lpesaro           #+#    #+#             */
/*   Updated: 2022/09/08 22:04:57 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	number;

	number = 48;
	while (number <= 57)
	{
		ft_putchar(number);
		number++;
	}
}
