/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:13:38 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 18:54:35 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
**	Если указана точность, то флаг '0' - игнорируется
*/

void		ft_parse_precision(char **format, t_printf *t_flags)
{
	if ((t_flags->precision != -1) || (**format != '.'))
		return ;
	(*format)++;
	t_flags->precision = ft_atoi(*format);
	t_flags->flags = (t_flags->flags == '0' ? '\0' : t_flags->flags);
	ft_move_format(format);
}
