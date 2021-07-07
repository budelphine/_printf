/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_print_diuxxp.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:54:33 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:26:04 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_start_print_diuxxp(t_printf *t_flags, va_list vl, int *res)
{
	unsigned long	nbr;
	int				len;

	ft_set_nbr(t_flags, vl, &nbr);
	ft_set_len_nbr(t_flags, nbr, &len);
	ft_correct_struct_diuxxp(t_flags, &nbr, len);
	ft_print_diuxxp(t_flags, &nbr, res);
}
