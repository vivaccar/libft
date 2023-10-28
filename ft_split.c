/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:53:05 by vinivaccari       #+#    #+#             */
/*   Updated: 2023/10/28 17:07:42 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	**ft_free(char **str, int word)
{
	while (word >= 0)
	{	
		free(str[word]);
		word--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char				**result;
	unsigned int		i;
	unsigned int		j;
	int					word;

	word = 0;
	j = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (result == NULL)
		return (NULL);
	while (word < ft_count(s, c))
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		if (j > i)
		{
			result[word] = ft_substr(s, i, j - i);
			if (result[word] == NULL)
				return (ft_free(result, word));
		}
		else
			result[word] = NULL;
		word++;
		i = j;
	}
	result[word] = NULL;
	return(result);
}

/* #include <stdio.h>
 
int	main(void)
{
	char	*str;
	char	**split;

	str = "Split       this for    me !! !";
	split = ft_split(str, ' ');
	printf("%s\n", split[0]);
	printf("%s\n", split[1]);
	printf("%s\n", split[2]);
	printf("%s\n", split[3]);
	printf("%s\n", split[4]);
	printf("%s\n", split[5]);
} */