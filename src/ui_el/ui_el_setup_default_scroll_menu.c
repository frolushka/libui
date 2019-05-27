/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_el_setup_default_scroll_menu.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbecker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 01:15:33 by sbecker           #+#    #+#             */
/*   Updated: 2019/05/24 08:46:36 by sbecker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libui.h"

void	ui_el_setup_default_scroll_menu(t_ui_el *el)
{
	ui_el_setup_default(el);
	el->params |= EL_IS_SCROLLABLE;
	ui_event_add_listener(&(el->events.onScrollUp), ui_el_scroll_menu_up);
	ui_event_add_listener(&(el->events.onScrollUp), ui_log_el_scroll_up);
	ui_event_add_listener(&(el->events.onScrollDown), ui_el_scroll_menu_down);
	ui_event_add_listener(&(el->events.onScrollDown), ui_log_el_scroll_down);
}
