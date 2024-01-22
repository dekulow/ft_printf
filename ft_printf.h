/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:38:11 by dekulow           #+#    #+#             */
/*   Updated: 2024/01/22 12:40:03 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/* -- REMOVE OR HIDE THIS INCLUDE -- */
//# include <stdio.h>
//# include <limits.h>
/* -- REMOVE OR HIDE THIS INCLUDE -- */

typedef unsigned int		t_ui;
typedef unsigned long		t_ul;

int		ft_printf(const char *str, ...);
t_ui	ft_print_hex(t_ui addr, t_ui is_upper);
t_ui	ft_print_ptr(long ptr);
t_ui	ft_print_int(int num);
t_ui	ft_print_uint(t_ui num);
t_ui	ft_putchar(char c);
t_ui	ft_putstr(char *s);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_strlen(const char *s);
t_ui	ft_itoa(int number);
t_ui	ft_utoa(t_ui n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t len);

#endif
