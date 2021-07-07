/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_print_cpct.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 14:07:39 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:48:53 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_start_print_cpct(t_printf *t_flags, va_list vl, int *res)
{
	char	ch;

	ch = (t_flags->type == 'c' ? (char)va_arg(vl, int) : '%');
	ft_correct_struct_cpct(t_flags, 1);
	ft_print_cpct(t_flags, ch, res);
}
