/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:44:09 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:46:11 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_printf	ft_init_struct(void)
{
	t_printf	t_flags;

	t_flags.flags = '\0';
	t_flags.width = 0;
	t_flags.precision = -1;
	t_flags.type = '\0';
	t_flags.status = 0;
	return (t_flags);
}
