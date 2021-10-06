/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dhandle_float_flags.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <wvaara@hive.fi>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:27:01 by wvaara            #+#    #+#             */
/*   Updated: 2021/10/05 14:36:17 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

void	ft_dhandle_float_flags(t_dprintf *data)
{
	int	extra;

	extra = 2;
	if (data->plus == 1 && data->space == '1')
		data->space = '0';
	if (data->space == '1' && data->neg == 1)
		data->space = '0';
	if (data->space == '1' && data->save_dot == 1 && data->str_len == 0 && \
		data->d_zero == 1)
		data->space = '0';
	if (data->zero == '1' && data->just_dot == 1)
		data->zero = '0';
	if (data->plus == 1 && data->neg == 1)
		data->plus = 0;
	if (data->space == '1' && data->nan == 0)
	{
		write(data->fd, " ", 1);
		if (data->xtra > 0)
			data->xtra--;
		data->ret++;
		data->space = '0';
	}
	if (data->hash == 1 && data->save == 0 && data->save_dot == 0 && \
		data->just_dot == 0 && data->d_zero == 1)
		data->hash = 0;
}