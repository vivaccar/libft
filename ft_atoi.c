/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinivaccari <vinivaccari@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:20:08 by vinivaccari       #+#    #+#             */
/*   Updated: 2023/10/16 20:08:36 by vinivaccari      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(const char *str)
{
    int     i;
    int     result;
    int     signal;

    signal = 1;
    i = 0;
    result = 0;
    while ((str[i] == '\t' || str[i] == ' '))
        i++;
    if ((str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            signal = signal * - 1;
        i++;
    }
    while ((str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * signal);
}