/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:32:28 by ucieutat          #+#    #+#             */
/*   Updated: 2021/10/18 11:12:33 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*result;

	result = ft_strdup(s);
	if (!result || !s || !f)
		return (NULL);
	i = -1;
	while (result[++i])
		result[i] = f(i, result[i]);
	return (result);
}
