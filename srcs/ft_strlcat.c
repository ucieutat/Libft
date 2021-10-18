/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 08:41:39 by ucieutat          #+#    #+#             */
/*   Updated: 2021/10/18 09:48:45 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	while (dest[j] && j <= size)
		j++;
	if (j > size)
		return (size + ft_strlen((char *)src));
	i = 0;
	k = j;
	if (size > 0)
	{
		while (src[i] && j < size - 1)
			dest[j++] = src[i++];
		dest[j] = 0;
	}
	if (k > size)
		k = size;
	return (k + ft_strlen((char *)src));
}
