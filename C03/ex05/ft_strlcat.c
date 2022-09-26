/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:01:25 by lpesaro           #+#    #+#             */
/*   Updated: 2022/09/22 01:53:14 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_size1(char *dest)
{
	int	j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	return (j);
}

int	ft_size2(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	dlen = ft_size1(dest);
	slen = ft_size2(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	j = dlen;
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
