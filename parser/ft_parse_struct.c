/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:16:38 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 18:35:14 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_parse_struct(char **format, t_printf *t_flags, va_list vl)
{
	ft_parse_flags(format, t_flags);
	ft_parse_stars(format, t_flags, vl);
	ft_parse_width(format, t_flags);
	ft_parse_precision(format, t_flags);
	ft_parse_type(format, t_flags);
}
