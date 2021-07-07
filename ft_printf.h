/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budelphi <budelphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:52:55 by budelphi          #+#    #+#             */
/*   Updated: 2020/12/19 15:48:42 by budelphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct		s_printf
{
	char			flags;
	int				width;
	int				precision;
	char			type;
	int				status;
}					t_printf;

int					ft_printf(const char *format, ...);
int					ft_read_format(char **format, va_list vl);
int					ft_print_param(char **format, va_list vl, int *res);

t_printf			ft_init_struct(void);
void				ft_parse_struct(char **format, t_printf *t_flags,
					va_list vl);
void				ft_parse_flags(char **format, t_printf *t_flags);
void				ft_parse_stars(char **format, t_printf *t_flags,
					va_list vl);
void				ft_parse_width(char **format, t_printf *t_flags);
void				ft_parse_precision(char **format, t_printf *t_flags);
void				ft_parse_type(char **format, t_printf *t_flags);

void				ft_choose_print_type(t_printf *t_flags, va_list vl,
					int *res);
void				ft_start_print_diuxxp(t_printf *t_flags, va_list vl,
					int *res);
void				ft_print_diuxxp(t_printf *t_flags, unsigned long *nbr,
					int *res);
void				ft_correct_struct_diuxxp(t_printf *t_flags,
					unsigned long *nbr, int len);
void				ft_set_nbr(t_printf *t_flags, va_list vl,
					unsigned long *nbr);
void				ft_set_len_nbr(t_printf *t_flags, unsigned long nbr,
					int *len);

void				ft_start_print_str(t_printf *t_flags, va_list vl,
					int *res);
void				ft_print_str(t_printf *t_flags, char *str, int *res);
void				ft_correct_struct_str(t_printf *t_flags, char *str,
					int len);

void				ft_start_print_cpct(t_printf *t_flags, va_list vl,
					int *res);
void				ft_correct_struct_cpct(t_printf *t_flags, int len);
void				ft_print_cpct(t_printf *t_flags, char ch, int *res);

void				ft_move_format(char **format);
int					ft_print_symbol(char **format);
int					ft_type(char c);
int					ft_putchar_base(char c);
int					ft_print_nbr_base(t_printf *t_flags, unsigned long nbr);
int					ft_sstrlen(char *str);
int					ft_atoi(char *str);

#endif
