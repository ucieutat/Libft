/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:25:17 by ucieutat          #+#    #+#             */
/*   Updated: 2021/11/23 16:48:43 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	result = malloc(sizeof(char) * (len + 1));
	if (!result || !s)
		return (NULL);
	while (i < len && start < ft_strlen(s))
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}
