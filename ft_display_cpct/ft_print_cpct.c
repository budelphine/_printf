/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cpct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 14:28:31 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:49:32 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_print_ch(char ch, int *res)
{
	*res += ft_putchar_base(ch);
}

static void	ft_print_width(t_printf *t_flags, int *res)
{
	char	flags;

	flags = t_flags->flags == '0' ? '0' : ' ';
	while (t_flags->width-- > 0)
		*res += ft_putchar_base(flags);
}

void		ft_print_cpct(t_printf *t_flags, char ch, int *res)
{
	if (t_flags->flags == '-')
	{
		ft_print_ch(ch, res);
		ft_print_width(t_flags, res);
	}
	else
	{
		ft_print_width(t_flags, res);
		ft_print_ch(ch, res);
	}
}
