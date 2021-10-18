/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 11:16:19 by ucieutat          #+#    #+#             */
/*   Updated: 2021/10/18 12:42:47 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_malloc(long n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		len;
	int		sign;

	sign = 0;
	nb = n;
	if (nb <= 0)
	{
		sign = 1;
		nb *= -1;
	}
	len = len_malloc(nb) + sign;
	result = malloc(sizeof(char) * (len + sign));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	while (len >= 0)
	{
		result[len--] = nb % 10 + 48;
		nb /= 10;
	}
	if (sign && n != 0)
		result[0] = '-';
	return (result);
}
