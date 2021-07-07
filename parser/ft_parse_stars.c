/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_stars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:15:22 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 18:54:03 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
**	Флаг '-' всегда самый сильный
**	Если пришла отрицательная ширина, то она раскладывается на флаг '-' и ширину
**
**	Если указана точность, то флаг '0' - игнорируется
**	Если точность пришла отрицательная, это означает, что она не указана
*/

void		ft_parse_stars(char **format, t_printf *t_flags, va_list vl)
{
	if (**format == '*')
	{
		(*format)++;
		t_flags->width = va_arg(vl, int);
		t_flags->flags = (t_flags->width < 0 ? '-' : t_flags->flags);
		t_flags->width *= (t_flags->width < 0 ? -1 : 1);
	}
	if (**format == '.' && *(*format + 1) == '*')
	{
		(*format) += 2;
		t_flags->precision = va_arg(vl, int);
		t_flags->flags = (t_flags->flags == '0' && t_flags->precision >= 0
							? '\0' : t_flags->flags);
	}
}
