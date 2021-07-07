/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choose_print_type.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:21:14 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:45:56 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_choose_print_type(t_printf *t_flags, va_list vl, int *res)
{
	if (t_flags->type == 'd' || t_flags->type == 'i' || t_flags->type == 'u'
		|| t_flags->type == 'x' || t_flags->type == 'X' || t_flags->type == 'p')
		ft_start_print_diuxxp(t_flags, vl, res);
	if (t_flags->type == 'c' || t_flags->type == '%')
		ft_start_print_cpct(t_flags, vl, res);
	if (t_flags->type == 's')
		ft_start_print_str(t_flags, vl, res);
}
