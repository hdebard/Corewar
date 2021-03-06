/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotfas <mcotfas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 16:02:12 by mcotfas           #+#    #+#             */
/*   Updated: 2016/04/25 16:03:00 by mcotfas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	cast(t_info *info, va_list ap)
{
	size_t	arg;

	if (info->lmod->z)
		arg = va_arg(ap, size_t);
	else if (info->lmod->j)
		arg = (uintmax_t)va_arg(ap, size_t);
	else if (info->lmod->ll)
		arg = (unsigned long long)va_arg(ap, size_t);
	else if (info->lmod->l)
		arg = (unsigned long)va_arg(ap, size_t);
	else if (info->lmod->hh)
		arg = (unsigned char)va_arg(ap, size_t);
	else
		arg = (unsigned int)va_arg(ap, size_t);
	return (arg);
}

void			conv_x(t_info *info, va_list ap)
{
	size_t	arg;
	char	*str;

	arg = cast(info, ap);
	str = ft_itoa_base_u(arg, 16, BASE_MIN);
	str = prec_nb(info, str);
	if (arg && info->flag->sharp)
	{
		if (info->field >= 2 && info->flag->zero)
		{
			info->str = ft_strjoin_free(info->str, ft_strdup("0x"));
			info->field = info->field - 2;
		}
		else
			str = ft_strjoin_free(ft_strdup("0x"), str);
	}
	transform_str(info, str);
}
