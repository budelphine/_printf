/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:17:26 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:46:28 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_parse_type(char **format, t_printf *t_flags)
{
	t_flags->type = **format;
	if (ft_type(t_flags->type))
		(*format)++;
}
