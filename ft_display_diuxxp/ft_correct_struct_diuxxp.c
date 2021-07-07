/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_correct_struct_diuxxp.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 14:09:20 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/20 13:51:07 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
**	Если нужно отпечатать точность (0, 1, 2 .. n) с нулем,
**	то печать числа пропускается и идет печать только нулей точности
*/

static void	ft_check_neg(t_printf *t_flags, int len)
{
	if (t_flags->status != -1 || t_flags->precision < len)
		return ;
	t_flags->width--;
	t_flags->precision++;
}

static void	ft_correct_of_len(t_printf *t_flags, unsigned long nbr, int len)
{
	while (len-- > 0 && (t_flags->precision > 0 || t_flags->width > 0))
	{
		if (t_flags->precision > 0 && nbr != 0)
			t_flags->precision--;
		else if (t_flags->width > 0)
			t_flags->width--;
	}
}

static int	ft_check_null_precision(t_printf *t_flags, unsigned long *nbr,
			int *len)
{
	if (*nbr != 0 || t_flags->precision < 0)
		return (0);
	(*len)--;
	t_flags->status = (t_flags->type == 'p' ? 0 : 1);
	return (1);
}

static void	ft_correct_width_prec(t_printf *t_flags)
{
	if (t_flags->precision >= t_flags->width)
		t_flags->width = 0;
	else if (t_flags->precision > 0)
		t_flags->width -= t_flags->precision;
}

void		ft_correct_struct_diuxxp(t_printf *t_flags, unsigned long *nbr,
			int len)
{
	ft_check_null_precision(t_flags, nbr, &len);
	ft_correct_width_prec(t_flags);
	ft_check_neg(t_flags, len);
	ft_correct_of_len(t_flags, *nbr, len);
}
