/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:13:31 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/22 15:13:36 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : lstadd_back
** This function add a new given list to the end of a given linked list.
** 🦕
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	last = *lst;
	while (last->next != 0)
		last = last->next;
	last->next = new;
}
