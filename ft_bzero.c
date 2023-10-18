/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:02:52 by vivaccar          #+#    #+#             */
/*   Updated: 2023/10/18 19:16:10 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;
	
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int		array[10];
	size_t	size;
	size_t	i;

	size = sizeof(array);
	i = 0;
	ft_bzero(array, size);
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
}*/