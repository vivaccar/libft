/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinivaccari <vinivaccari@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:53:05 by vinivaccari       #+#    #+#             */
/*   Updated: 2023/10/24 20:29:45 by vinivaccari      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_subs(const char *s, char c)
{
    const char  *ptr;
    int count;

    ptr = s;
    while (*ptr != '\0')
    {
        if (*ptr == c)
            count++;
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    char    **result;
    int j;
    int i;
    
    start = s;
    i = 0;
    j = 0;
    if (*s == NULL)
        return(NULL);
    result = (char **)malloc((count + 1) * sizeof(char *));
    if (result == NULL)
        return (NULL);
    while (*s != '/0')
    {
        if (*s == c)
            result[i] = (char *)malloc(ft_strlen(s) )
    }
}