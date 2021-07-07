/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_correct_struct_cpct.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 14:09:31 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:48:35 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_correct_struct_cpct(t_printf *t_flags, int len)
{
	t_flags->precision = (t_flags->precision < 0 ? len : t_flags->precision);
	t_flags->precision = (t_flags->precision > len ? len : t_flags->precision);
	if (t_flags->precision < len)
		t_flags->width = (t_flags->width > t_flags->precision ?
		t_flags->width - t_flags->precision : 0);
	else
		t_flags->width = (t_flags->width > len ? t_flags->width - len : 0);
}
