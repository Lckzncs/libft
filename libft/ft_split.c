/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:51:24 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/07 12:02:03 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	size_t	count_tokens(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			s++;
		}
		else
		{
			len++;
			while (*s != '\0' && *s != c)
			{
				s++;
			}
		}
	}
	return (len);
}

static	void	ft_free(char **s, int i)
{
	while (s[i] != 0)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static	size_t	get_length(const char *s, char c)
{
	size_t		len;
	const char	*tmp;

	tmp = s;
	len = 0;
	while (*tmp && *tmp != c)
	{
		tmp++;
		len++;
	}
	return (len);
}

static	int	fill_array(char **array, const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = get_length(s, c);
			array[i] = malloc(len + 1);
			if (!array[i])
			{
				ft_free(array, 0);
				return (0);
			}
			ft_strlcpy(array[i], s, len + 1);
			s = s + len;
			i++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		len;

	if (!s)
		return (NULL);
	len = count_tokens(s, c);
	if (len < 0)
		return (NULL);
	array = malloc((len + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	if (fill_array(array, s, c) == 0)
		return (NULL);
	array[len] = (NULL);
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "zero one two three four five six seven eight nine ten";
	char **words = ft_split(str, ' ');
	int i = 0; 
	while (words[i])
		printf("%s\n", words[i++]);
	i = 0; 
	while (words[i])
		free(words[i++]);
	free(words);
	return (0);
}
*/
