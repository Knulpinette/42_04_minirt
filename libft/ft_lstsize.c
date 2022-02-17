/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osurcouf <.@student.42lisboa.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:14:52 by osurcouf          #+#    #+#             */
/*   Updated: 2021/02/22 15:14:53 by osurcouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 🦕
** function : lstsize
** This function returns the number of elements in a given linked list.
** 🦕
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*index;
	int		nb;

	if (!lst)
		return (0);
	index = lst;
	nb = 1;
	while (index->next != 0)
	{
		index = index->next;
		nb++;
	}
	return (nb);
}
