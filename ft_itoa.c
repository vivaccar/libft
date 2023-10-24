/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinivaccari <vinivaccari@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:39:17 by vinivaccari       #+#    #+#             */
/*   Updated: 2023/10/24 21:48:21 by vinivaccari      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     int_len(int n)
{
    int i;
    i = 0;
    if (n < 0)
        i = 1;
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char  *str;
    int i;
    int size;
      
    size = int_len(n);
    str = (char *)malloc((size + 1) * sizeof(char));
    if (str == NULL)
        return(NULL);
    i = size - 1;
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while (n > 0)
    {
        str[i] = '0' + (n % 10);
        n /= 10;
        i--;
    }
    str[size] = '\0';
    return(str);
}

/*#include <stdio.h>

int main(void)
{
    printf("%s", ft_itoa(-150));
}*/