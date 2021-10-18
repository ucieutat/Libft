/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 10:31:32 by ucieutat          #+#    #+#             */
/*   Updated: 2021/10/18 00:12:00 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_words(char const *s, char c)
{
	int	i;
	int	nb;

	i = -1;
	nb = 1;
	while (s[++i])
		if (s[i] == c)
			nb++;
	return (nb);
}

int	len_word(char const *s, char c, int len)
{
	int	i;

	i = 0;
	while (s[len] && s[len] != c)
	{
		i++;
		len++;
	}
	return (i);
}

char	*cpy_word(char const *s, char c, int i)
{
	char	*word;
	int		k;

	k = 0;
	word = malloc(sizeof(char) * (len_word(s, c, i) + 1));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != c)
		word[k++] = s[i++];
	word[k] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = malloc(sizeof(char *) * (nb_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			result[j++] = cpy_word(s, c, i);
			i += len_word(s, c, i);
		}
	}
	result[j] = 0;
	return (result);
}
