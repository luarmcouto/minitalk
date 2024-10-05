/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:57:59 by luarodri          #+#    #+#             */
/*   Updated: 2024/05/24 18:03:45 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numwords(char const *s, char c)
{
	int	i;
	int	word_num;

	i = 0;
	word_num = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			word_num++;
		i++;
	}
	return (word_num);
}

static int	split_words(char **result, char const *s, char c, int word)
{
	int		start_i;
	size_t	end_i;

	end_i = 0;
	start_i = 0;
	while (s[end_i])
	{
		if (s[end_i] == c || s[end_i] == 0)
			start_i = end_i + 1;
		if (s[end_i] != c && (s[end_i + 1] == c || s[end_i + 1] == 0))
		{
			result[word] = malloc(sizeof(char) * (end_i - start_i + 2));
			if (!result[word])
			{
				while (word++)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (s + start_i), end_i - start_i + 2);
			word++;
		}
		end_i++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (numwords(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
		return (NULL);
	return (result);
}
/*
#include <stdio.h>
int main() {
    char **result;
    int i;
    char str[] = "Vamo inter Vamo inter Vamo inter";

    i = 0;
    result = ft_split(str, ' ');
    if (result == NULL)
        return (1);
    while (result[i])
	{
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    return 0;
}*/