/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:00:54 by vivaccar          #+#    #+#             */
/*   Updated: 2023/10/21 17:45:04 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	j;
	
	i = 0;
	j = ft_strlen(j);
	if (!*s1)
		return(ft_strdup(""));
	if (!*s2)
		return(ft_strdup(s1));
	if (ft_strncmp(s1, set, j) == 0)
	{
		while (ft_strncmp(s1[j]))
	}
}