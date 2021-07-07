/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:58:12 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:33:32 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static long	ft_is_neg(t_printf *t_flags, long nbr)
{
	if (nbr >= 0)
		return (nbr);
	t_flags->status = -1;
	return (nbr * -1);
}

void		ft_set_nbr(t_printf *t_flags, va_list vl, unsigned long *nbr)
{
	if (t_flags->type == 'd' || t_flags->type == 'i')
		*nbr = (unsigned long)(ft_is_neg(t_flags, va_arg(vl, int)));
	else if (t_flags->type == 'p')
		*nbr = va_arg(vl, unsigned long);
	else
		*nbr = (unsigned long)va_arg(vl, unsigned int);
}
