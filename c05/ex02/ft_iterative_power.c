/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:38:10 by lpesaro           #+#    #+#             */
/*   Updated: 2022/09/26 22:43:45 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	i = 0;
	res = 1;
	if (power < 0)
	{
		res = 1 / nb;
	}
	while (power > 0)
	{
		res = res * nb;
		power = power - 1;
	}
	return(res);
}
