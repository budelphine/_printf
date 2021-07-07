/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:17:53 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:47:07 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_parse_width(char **format, t_printf *t_flags)
{
	if (t_flags->width != 0)
		return ;
	t_flags->width = ft_atoi(*format);
	ft_move_format(format);
}
