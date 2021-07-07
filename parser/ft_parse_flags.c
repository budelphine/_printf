/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:12:19 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 13:47:11 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_check_flags(char format)
{
	if (!(ft_type(format)) && (format == '-' || format == '0'))
		return (1);
	return (0);
}

void		ft_parse_flags(char **format, t_printf *t_flags)
{
	while (ft_check_flags(**format))
	{
		t_flags->flags = (**format == '0' && t_flags->flags != '-' ? '0' : '-');
		(*format)++;
	}
}
