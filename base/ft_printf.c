/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:04:31 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:16:35 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	vl;
	int		res;

	if (!format)
		return (-1);
	res = 0;
	va_start(vl, format);
	res = ft_read_format((char **)&format, vl);
	va_end(vl);
	return (res);
}
