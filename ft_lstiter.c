/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <vivaccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:02:58 by vivaccar          #+#    #+#             */
/*   Updated: 2023/10/29 19:24:52 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	ft_iter(void *lst)
{
	char	*new;
	
	new = "Hello World!";
	lst = new;
}

#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	lst = ft_lstnew("hi");
	lst->next = ft_lstnew("hola");
	printf("1st: %s\n", (char *)lst->content);
	printf("2nd: %s\n", (char *)lst->next->content);
	ft_lstiter(lst, &ft_iter);
	printf("1st: %s\n", (char *)lst->content);
	printf("2nd: %s\n", (char *)lst->next->content);
} */