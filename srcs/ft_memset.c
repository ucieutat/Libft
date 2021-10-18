/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:28:17 by ucieutat          #+#    #+#             */
/*   Updated: 2021/10/18 11:42:40 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;

	i = -1;
	while (++i < n)
		(((char *)s)[i] = c);
	return ((void *)s);
}
