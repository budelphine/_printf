/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_print_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 14:07:39 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:36:53 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_start_print_str(t_printf *t_flags, va_list vl, int *res)
{
	int		len;
	char	*str;

	str = va_arg(vl, char *);
	len = ft_sstrlen(str);
	ft_correct_struct_str(t_flags, str, len);
	ft_print_str(t_flags, str, res);
}
