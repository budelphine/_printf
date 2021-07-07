/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:09:40 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 18:34:57 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_param(char **format, va_list vl, int *res)
{
	t_printf	t_flags;

	(*format)++;
	t_flags = ft_init_struct();
	ft_parse_struct(format, &t_flags, vl);
	ft_choose_print_type(&t_flags, vl, res);
	return (*res);
}
