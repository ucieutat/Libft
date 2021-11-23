/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:33:48 by ucieutat          #+#    #+#             */
/*   Updated: 2021/11/23 16:48:32 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*temp2;
	size_t	i;

	i = 0;
	temp = (char *)src;
	temp2 = (char *)dest;
	if (temp2 > temp)
	{
		while (i < n)
		{
			temp2[n - 1] = temp[n - 1];
			n--;
		}
	}
	else
	{
		while (temp && i < n)
		{
			temp2[i] = temp[i];
			i++;
		}
	}
	return (dest);
}
