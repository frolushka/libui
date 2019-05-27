/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbednar <sbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 06:38:35 by edraugr-          #+#    #+#             */
/*   Updated: 2019/04/06 18:19:12 by sbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

void	ui_draw(t_ui_main *m)
{
	ui_clear_windows(m);
	ui_draw_windows(m);
	ui_show_windows(m);
}
