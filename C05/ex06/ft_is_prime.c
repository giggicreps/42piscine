/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:52:44 by lpesaro           #+#    #+#             */
/*   Updated: 2022/09/27 16:33:08 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;
	int	div;

	div = 1;
	count = 0;
	while (count < 3 && div <= nb / 2)
	{
		if (nb % div == 0)
			count++;
	div++;
	}
	if (count == 1)
		return (1);
	else
		return (0);
}
