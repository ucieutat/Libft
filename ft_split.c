/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucieutat <cieutatulin@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 10:31:32 by ucieutat          #+#    #+#             */
/*   Updated: 2021/11/23 17:51:29 by ucieutat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_words(char const *s, char c)
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

static int	len_word(char const *s, char c, int len)
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

static char	*cpy_word(char const *s, char c, int i)
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

static char	**ft_free(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	if (!s)
		return (NULL);
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
			if (result[j - 1] == NULL)
				return (ft_free(result));
			i += len_word(s, c, i);
		}
	}
	result[j] = 0;
	return (result);
}
