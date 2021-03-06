/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted_des_intlist.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 12:30:05 by mbelalou          #+#    #+#             */
/*   Updated: 2018/06/20 12:30:08 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/list.h"

BOOL	ft_is_sorted_des_intlist(const t_int_list *list)
{
	if (!list || !list->next)
		return (T);
	while (list->next)
	{
		if (list->data < (list->next)->data)
			return (F);
		list = list->next;
	}
	return (T);
}
