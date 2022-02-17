/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:13:53 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/22 15:13:55 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : lstclear
** This function cleans the memory of a whole given chained linked list.
** Then sets the first pointer to the list to NULL.
** 🦕
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*index;
	t_list	*temp;

	index = *lst;
	while (index->next != 0)
	{
		temp = index->next;
		ft_lstdelone(index, del);
		index = temp;
	}
	ft_lstdelone(index, del);
	*lst = NULL;
}
