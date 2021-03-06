/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <wvaara@hive.fi>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:58:55 by wvaara            #+#    #+#             */
/*   Updated: 2021/10/05 14:47:45 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_capital(char *s)
{
	if (s[0] == '1' && s[1] == '0' && s[2] == '1' && s[3] == '0')
		write(1, "A", 1);
	if (s[0] == '1' && s[1] == '0' && s[2] == '1' && s[3] == '1')
		write(1, "B", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '0' && s[3] == '0')
		write(1, "C", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '0' && s[3] == '1')
		write(1, "D", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '1' && s[3] == '0')
		write(1, "E", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '1' && s[3] == '1')
		write(1, "F", 1);
}

static void	ft_lower(char *s)
{
	if (s[0] == '1' && s[1] == '0' && s[2] == '1' && s[3] == '0')
		write(1, "a", 1);
	if (s[0] == '1' && s[1] == '0' && s[2] == '1' && s[3] == '1')
		write(1, "b", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '0' && s[3] == '0')
		write(1, "c", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '0' && s[3] == '1')
		write(1, "d", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '1' && s[3] == '0')
		write(1, "e", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '1' && s[3] == '1')
		write(1, "f", 1);
}

static void	ft_binary_to_hexa(char *s, t_data *data)
{
	if (s[0] == '0' && s[1] == '0' && s[2] == '0' && s[3] == '0')
		write(1, "0", 1);
	if (s[0] == '0' && s[1] == '0' && s[2] == '0' && s[3] == '1')
		write(1, "1", 1);
	if (s[0] == '0' && s[1] == '0' && s[2] == '1' && s[3] == '0')
		write(1, "2", 1);
	if (s[0] == '0' && s[1] == '0' && s[2] == '1' && s[3] == '1')
		write(1, "3", 1);
	if (s[0] == '0' && s[1] == '1' && s[2] == '0' && s[3] == '0')
		write(1, "4", 1);
	if (s[0] == '0' && s[1] == '1' && s[2] == '0' && s[3] == '1')
		write(1, "5", 1);
	if (s[0] == '0' && s[1] == '1' && s[2] == '1' && s[3] == '0')
		write(1, "6", 1);
	if (s[0] == '0' && s[1] == '1' && s[2] == '1' && s[3] == '1')
		write(1, "7", 1);
	if (s[0] == '1' && s[1] == '0' && s[2] == '0' && s[3] == '0')
		write(1, "8", 1);
	if (s[0] == '1' && s[1] == '0' && s[2] == '0' && s[3] == '1')
		write(1, "9", 1);
	if (data->x == 1)
		ft_lower(s);
	else
		ft_capital(s);
}

static void	ft_binary_to_octal(char *s)
{
	if (s[0] == '0' && s[1] == '0' && s[2] == '0')
		write(1, "0", 1);
	if (s[0] == '0' && s[1] == '0' && s[2] == '1')
		write(1, "1", 1);
	if (s[0] == '0' && s[1] == '1' && s[2] == '0')
		write(1, "2", 1);
	if (s[0] == '0' && s[1] == '1' && s[2] == '1')
		write(1, "3", 1);
	if (s[0] == '1' && s[1] == '0' && s[2] == '0')
		write(1, "4", 1);
	if (s[0] == '1' && s[1] == '0' && s[2] == '1')
		write(1, "5", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '0')
		write(1, "6", 1);
	if (s[0] == '1' && s[1] == '1' && s[2] == '1')
		write(1, "7", 1);
}

void	ft_negative_hex(t_data *data)
{
	int		i;
	int		add;
	char	*ptr;
	char	*binary;

	i = 0;
	if (data->base == 16)
		add = 4;
	else
		add = 3;
	ptr = ft_to_binary(data);
	while (ptr[i] != '\0')
	{
		binary = ft_strsub(ptr, i, add);
		if (data->base == 16)
			ft_binary_to_hexa(binary, data);
		if (data->base == 8)
			ft_binary_to_octal(binary);
		i = i + add;
		data->ret++;
	}
}
