/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:04:42 by dekulow           #+#    #+#             */
/*   Updated: 2024/01/22 12:38:39 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui	ft_putchar(char c)
{
	return (write(1, &c, 1), 1);
}

t_ui	ft_putstr(char *s)
{
	t_ui	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"), 6);
	while (s[i] != '\0')
	{
		(void) write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
