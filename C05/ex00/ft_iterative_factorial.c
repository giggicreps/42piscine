/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:01:46 by lpesaro           #+#    #+#             */
/*   Updated: 2022/09/26 21:36:31 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fatt;

	fatt = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			fatt = fatt * nb;
			nb--;
		}
		return (fatt);
	}
	else
		return (0);
}
