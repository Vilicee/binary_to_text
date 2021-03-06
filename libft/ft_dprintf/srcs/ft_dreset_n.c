/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dreset_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <wvaara@hive.fi>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:30:18 by wvaara            #+#    #+#             */
/*   Updated: 2021/10/05 14:43:15 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

void	ft_dreset_n(t_dprintf *data)
{
	data->n = 0;
	data->hn = 0;
	data->hhn = 0;
	data->ln = 0;
	data->lln = 0;
	data->un = 0;
	data->uhn = 0;
	data->uhhn = 0;
	data->ohhn = 0;
	data->uln = 0;
	data->ulln = 0;
	data->f_n = 0;
}
