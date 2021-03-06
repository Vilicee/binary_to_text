/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <wvaara@hive.fi>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:28:55 by wvaara            #+#    #+#             */
/*   Updated: 2021/10/05 14:51:31 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DPRINTF_H
# define FT_DPRINTF_H
# include "../../includes/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_dprintf
{
	int						i;
	int						ii;
	int						fd;
	int						check;
	int						prec;
	int						c_count;
	int						count;
	int						ret;
	int						minus;
	int						save_neg;
	int						plus;
	int						neg;
	int						dot;
	int						hash;
	int						num;
	int						save;
	int						save_dot;
	int						xtra;
	int						str_len;
	int						str_len_xtra;
	int						len;
	int						waste;
	int						precision;
	int						negative;
	int						base;
	int						o;
	int						h;
	int						hh;
	int						l;
	int						f;
	int						ll;
	int						inf;
	int						nan;
	int						cap_l;
	long long				n;
	int						u;
	long long				int_part;
	int						id;
	int						just_dot;
	int						d_zero;
	int						x;
	int						d_or_i;
	int						cap_x;
	long double				f_n;
	int						flag[55000];
	unsigned int			un;
	long int				ln;
	unsigned long			uln;
	long long				lln;
	signed char				hhn;
	long long				hn;
	unsigned short			uhn;
	unsigned long long		ulln;
	int						uhhn;
	unsigned char			ohhn;
	char					next;
	char					zero;
	char					space;
	char					roundup;
	char					star;
	char					*deci;
	va_list					copy;
}							t_dprintf;

int						ft_dprintf(int fd, const char *str, ...);
int						ft_dstring_flag(const char *format, t_dprintf *data);
int						ft_dspecifiers(const char *format, t_dprintf *data);
int						ft_dformat_str(const char *format, t_dprintf *data);
int						ft_dadhoc_atoi(const char *str, t_dprintf *data);
int						ft_dhexa_len(t_dprintf *data, unsigned long long n);
int						ft_dflags(const char *format, t_dprintf *data);
void					ft_dstring(t_dprintf *data);
void					ft_dvalidate_flags(const char *format, t_dprintf *data);
void					ft_dcharacter(t_dprintf *data);
void					ft_daddress(t_dprintf *data);
void					ft_dint(t_dprintf *data);
void					ft_dint_format(t_dprintf *data);
void					ft_dunsigned_int(t_dprintf *data);
void					ft_dpercentage(t_dprintf *data);
void					ft_dreset_flags(t_dprintf *data);
void					ft_dremove_neg(t_dprintf *data);
void					ft_dhexadecimal(t_dprintf *data, unsigned long long n);
void					ft_dsave_arg(t_dprintf *data);
void					ft_dhexa(t_dprintf *data);
void					ft_dnegative_hex(t_dprintf *data);
void					ft_dreset_n(t_dprintf *data);
void					ft_dsave_hex_arg(t_dprintf *data);
void					ft_dhandle_hash(t_dprintf *data);
void					ft_dcheck_for_negative(t_dprintf *data);
void					ft_dfloat(t_dprintf *data);
void					ft_dhandle_flags(t_dprintf *data);
void					ft_dcap_l_round(t_dprintf *data);
void					ft_dhandle_float_flags(t_dprintf *data);
void					ft_dformat_float(t_dprintf *data);
void					ft_dformat_diu(t_dprintf *data);
void					ft_drounding(t_dprintf *data);
void					ft_dhandle_nan_inf(t_dprintf *data);
int						ft_dextras(t_dprintf *data);
int						ft_dprint_additional(t_dprintf *data);
char					*ft_dto_binary(t_dprintf *data);

#endif
