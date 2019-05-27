/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_el_set_current_texture_by_id.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbednar <sbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 05:06:00 by edraugr-          #+#    #+#             */
/*   Updated: 2019/05/24 19:25:37 by sbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

int	ui_el_set_current_texture_by_id(t_ui_el *el, const char *texture_id)
{
	t_list_texture	*tmp;
	int				hash;

	tmp = el->sdl_textures;
	if (tmp == NULL)
		return (FUNCTION_FAILURE);
	hash = ft_strhash(texture_id);
	while (tmp)
	{
		if (tmp->content_size == (size_t)hash)
		{
			el->current_texture = hash;
			return(FUNCTION_SUCCESS);
		}
		tmp = tmp->next;
	}
	return (FUNCTION_FAILURE);
}
