/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:26:32 by hsrour            #+#    #+#             */
/*   Updated: 2025/11/03 22:30:15 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>
#include "libft.h"

static int	word_count(char const *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (c != str[i])
		{
			words++;
			while (str[i] && c != str[i])
			{
				i++;
			}
		}
		else
			i++;
	}
	return (words);
}

static char	*word_spliter(char const *str, char c)
{
	char	*word;
	int		i;
	int		s;

	i = 0;
	s = 0;
	while (str[s] && str[s] != c)
	{
		s++;
	}
	word = (char *)malloc(sizeof(char) * (s + 1));
	if (word == NULL)
	{
		return (NULL);
	}
	while (i < s)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	j = 0;
	i = 0;
	tab = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s || !tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j++] = word_spliter(&s[i], c);
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
