/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:33:56 by lpesaro           #+#    #+#             */
/*   Updated: 2022/09/27 17:09:01 by lpesaro          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
