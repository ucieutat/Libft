/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:48:47 by ucieutat          #+#    #+#             */
/*   Updated: 2021/11/23 16:48:31 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	*tmp2;

	if (src == NULL && dest == NULL)
		return (NULL);
	tmp = (char *)dest;
	tmp2 = (char *)src;
	while (n > 0)
	{
		*tmp++ = *tmp2++;
		n--;
	}
	return (dest);
}
