/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:14:25 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/22 15:14:27 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : lstadd_back
** This function iterates through a list and applies a given function to each
** one of its elements.
** 🦕
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*index;

	if (!lst)
		return ;
	index = lst;
	while (index->next != 0)
	{
		f(index->content);
		index = index->next;
	}
	f(index->content);
	return ;
}
