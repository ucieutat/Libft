/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:44:40 by ucieutat          #+#    #+#             */
/*   Updated: 2021/10/18 15:49:51 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (i < len && str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (i + j < len && to_find[j] && str[i + j] == to_find[j])
				j++;
			if (!to_find[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
