/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 14:28:31 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 19:21:48 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_putnstr(char *str, int len)
{
	int	res;

	res = 0;
	while (*str && len)
	{
		res += ft_putchar_base(*str++);
		len--;
	}
	return (res);
}

static int	ft_print_string(t_printf *t_flags, char *str, int *res)
{
	if (str == NULL)
		*res += ft_putnstr("(null)", t_flags->precision);
	else
		*res += ft_putnstr(str, t_flags->precision);
	return (0);
}

static int	ft_print_width(t_printf *t_flags, int *res)
{
	char	flags;

	flags = t_flags->flags == '0' ? '0' : ' ';
	while (t_flags->width-- > 0)
		*res += ft_putchar_base(flags);
	return (1);
}

void		ft_print_str(t_printf *t_flags, char *str, int *res)
{
	if (t_flags->flags == '-')
	{
		ft_print_string(t_flags, str, res);
		ft_print_width(t_flags, res);
	}
	else
	{
		ft_print_width(t_flags, res);
		ft_print_string(t_flags, str, res);
	}
}
