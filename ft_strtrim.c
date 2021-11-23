/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 09:53:33 by ucieutat          #+#    #+#             */
/*   Updated: 2021/11/23 17:33:40 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inset(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		debut;
	int		fin;
	int		i;

	if (!s1)
		return (NULL);
	debut = 0;
	i = 0;
	fin = ft_strlen((char *)s1) - 1;
	while (is_inset(s1[debut], set))
		debut++;
	while (is_inset(s1[fin], set) && fin > debut)
		fin--;
	if (debut > fin)
		return ("");
	result = malloc(sizeof(char) * (fin - debut + 2));
	if (!result)
		return (NULL);
	while (debut <= fin)
		result[i++] = s1[debut++];
	result[i] = '\0';
	return (result);
}
