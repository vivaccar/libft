/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:44:02 by vivaccar          #+#    #+#             */
/*   Updated: 2023/10/20 20:19:01 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ofs1;
	size_t	ofs2;
	char	*str;

	i = 0;
	if (s1[i] == 0 && s2[i] == 0)
		return (ft_strdup(""));
	if (s1[i] != 0 && s2[i] == 0)
		return (ft_strdup(s1));
	if (s1[i] == 0 && s2[i] != 0)
		return (ft_strdup(s2));
	ofs1 = ft_strlen(s1);
	ofs2 = ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * (ofs1 + ofs2 + 1));
	if (str[i] == 0)
		return (NULL);
	ft_strlcpy(str, s1, ofs1 + 1);
	ft_strlcat(str, s2, ofs2 + 1);
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s", ft_strjoin("bom dia", "boa tarde"));
} */