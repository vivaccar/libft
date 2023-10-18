/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:54:26 by vivaccar          #+#    #+#             */
/*   Updated: 2023/10/18 20:25:00 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return ((void *)ptr);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int		*array;
	size_t	size;
	size_t	i;

	i = 0;
	array = malloc(sizeof(int)* 10);
	while (i < 10)
	{
		array[i] = 2;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		printf("%d", array[i]);
		i++;
	}
	i = 0;
	size = 10;
	ft_memset(array, 1, size);
	while (i < 10)
	{
		printf("%d", array[i]);
		i++;
	}
}