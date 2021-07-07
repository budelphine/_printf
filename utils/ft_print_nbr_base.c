/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:42:20 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/20 13:51:00 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_putnbr_base(unsigned long nbr, unsigned long base, char c)
{
	int res;

	res = 0;
	if (nbr > (base - 1))
	{
		res += ft_putnbr_base(nbr / base, base, c);
		res += ft_putnbr_base(nbr % base, base, c);
	}
	else if (nbr < 10)
		res += ft_putchar_base(nbr + '0');
	else if (c == 'x')
		res += ft_putchar_base((nbr % 10) + 97);
	else if (c == 'X')
		res += ft_putchar_base((nbr % 10) + 65);
	return (res);
}

int			ft_print_nbr_base(t_printf *t_flags, unsigned long nbr)
{
	int	res;

	res = 0;
	if (t_flags->type == 'X')
		res += ft_putnbr_base(nbr, 16, 'X');
	else if (t_flags->type == 'x')
		res += ft_putnbr_base(nbr, 16, 'x');
	else if (t_flags->type == 'p')
	{
		res += ft_putchar_base('0');
		res += ft_putchar_base('x');
		res += (nbr == 0 && t_flags->precision >= 0 ?
				0 : ft_putnbr_base(nbr, 16, 'x'));
	}
	else
		res += ft_putnbr_base(nbr, 10, 'd');
	return (res);
}
