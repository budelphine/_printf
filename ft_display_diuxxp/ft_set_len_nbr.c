/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_len_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 15:22:22 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 19:17:53 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_lennbr_base(unsigned long nbr, unsigned long sys)
{
	int len;

	len = 0;
	while (nbr >= sys)
	{
		nbr = nbr / sys;
		len++;
	}
	if (nbr < sys)
		len++;
	return (len);
}

void		ft_set_len_nbr(t_printf *t_flags, unsigned long nbr, int *len)
{
	if (t_flags->type == 'x' || t_flags->type == 'X')
		*len = ft_lennbr_base(nbr, 16);
	else if (t_flags->type == 'p')
		*len = ft_lennbr_base(nbr, 16) + 2;
	else
		*len = ft_lennbr_base(nbr, 10);
	if (t_flags->status == -1)
		(*len)++;
}
