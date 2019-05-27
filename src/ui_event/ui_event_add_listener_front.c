/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_event_add_listener_front.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbednar <sbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 08:02:31 by sbednar           #+#    #+#             */
/*   Updated: 2019/04/22 08:02:49 by sbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

int	ui_event_add_listener_front(t_ui_event *e, func_ptr f)
{
	t_list	*node;
	long	ptr;

	ptr = (long)f;
	if ((node = ft_lstnew((void *)&ptr, sizeof(ptr))) == NULL)
		return (FUNCTION_FAILURE);
	if (e->events == NULL)
	{
		e->events = node;
	}
	else
	{
		ft_lstadd(&(e->events), node);
	}
	return (FUNCTION_SUCCESS);
}
