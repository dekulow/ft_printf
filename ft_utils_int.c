/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:24:51 by dekulow           #+#    #+#             */
/*   Updated: 2024/01/22 12:37:21 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_ui	ft_convert_itoa(t_ui n, t_ui is_negative)
{
	char	buffer[10];
	char	tmp;
	int		index;
	int		j;

	index = 0;
	while (n != 0)
	{
		buffer[index++] = ((n % 10) + '0');
		n /= 10;
	}
	if (is_negative == 1)
		buffer[index++] = '-';
	buffer[index] = '\0';
	j = 0;
	while (j < (index / 2))
	{
		tmp = buffer[j];
		buffer[j] = buffer[index - 1 - j];
		buffer[index - 1 - j] = tmp;
		j++;
	}
	return (ft_putstr(buffer));
}

t_ui	ft_itoa(int number)
{
	if (number == 0)
		return (ft_putstr("0\0"));
	else if (number == -2147483648)
		return (ft_putstr("-2147483648"));
	if (number < 0)
		return (ft_convert_itoa((number * -1), 1));
	return (ft_convert_itoa(number, 0));
}

t_ui	ft_utoa(t_ui n)
{
	char	buffer[10];
	char	tmp;
	int		index;
	int		j;

	index = 0;
	while (n != 0)
	{
		buffer[index++] = ((n % 10) + '0');
		n /= 10;
	}
	buffer[index] = '\0';
	j = 0;
	while (j < (index / 2))
	{
		tmp = buffer[j];
		buffer[j] = buffer[index - 1 - j];
		buffer[index - 1 - j] = tmp;
		j++;
	}
	return (ft_putstr(buffer));
}
