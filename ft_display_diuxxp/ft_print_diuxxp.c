/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_diuxxp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 13:41:46 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/20 13:51:52 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_print_neg(t_printf *t_flags, int *res)
{
	if (t_flags->status != -1)
		return ;
	*res += ft_putchar_base('-');
	t_flags->status = 0;
}

static void	ft_print_nbr(t_printf *t_flags, unsigned long *nbr, int *res)
{
	if (t_flags->status == 1 || (t_flags->precision == 0 && *nbr == 0
		&& t_flags->type != 'p'))
		return ;
	ft_print_neg(t_flags, res);
	*res += ft_print_nbr_base(t_flags, *nbr);
	t_flags->status = 1;
}

static void	ft_print_precision(t_printf *t_flags, int *res)
{
	if (t_flags->precision <= 0)
		return ;
	ft_print_neg(t_flags, res);
	while (t_flags->precision-- > 0)
		*res += ft_putchar_base('0');
}

static void	ft_print_width(t_printf *t_flags, int *res)
{
	char	flags;

	if (t_flags->width <= 0)
		return ;
	flags = t_flags->flags == '0' ? '0' : ' ';
	if (flags == '0')
		ft_print_neg(t_flags, res);
	while (t_flags->width-- > 0)
		*res += ft_putchar_base(flags);
}

void		ft_print_diuxxp(t_printf *t_flags, unsigned long *nbr, int *res)
{
	if (t_flags->flags == '-')
	{
		ft_print_precision(t_flags, res);
		ft_print_nbr(t_flags, nbr, res);
		ft_print_width(t_flags, res);
	}
	else
	{
		ft_print_width(t_flags, res);
		ft_print_precision(t_flags, res);
		ft_print_nbr(t_flags, nbr, res);
	}
}
