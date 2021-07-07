/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:07:08 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 13:42:53 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_read_format(char **format, va_list vl)
{
	int	res;

	res = 0;
	while (**format != '\0')
	{
		if (**format != '%')
			res += ft_print_symbol(format);
		else
			ft_print_param(format, vl, &res);
		if (res == -1)
			return (res);
	}
	return (res);
}
