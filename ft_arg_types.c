/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_types.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:04:20 by vpolojie          #+#    #+#             */
/*   Updated: 2023/08/18 08:53:43 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_type(va_list list_arg, size_t *nb_cara)
{
	char	c;

	c = (char)va_arg(list_arg, int);
	write(1, &c, 1);
	(*nb_cara)++;
}

void	ft_str_type(va_list list_arg, size_t *nb_cara)
{
	char	*str;

	str = (char *)va_arg(list_arg, char *);
	if (str == NULL)
		str = "(null)";
	ft_putstr_fd(str, 1);
	(*nb_cara) += ft_strlen(str);
}

void	ft_int_type(va_list list_arg, size_t *nb_cara)
{
	int	nbr;

	nbr = (int)va_arg(list_arg, int);
	ft_putnbr_fd2(nbr, 1, nb_cara);
}

void	ft_unsigned_int_type(va_list list_arg, size_t *nb_cara)
{
	unsigned int	nbr;

	nbr = (unsigned int)va_arg(list_arg, unsigned int);
	ft_put_unsigned_nbr_fd(nbr, 1, nb_cara);
}

void	ft_base_type(va_list list_arg, size_t *nb_cara, char *base)
{
	int	nbr_base;

	nbr_base = (int)va_arg(list_arg, int);
	if (nbr_base == 0)
	{
		ft_putchar_fd('0', 1);
		(*nb_cara)++;
	}
	else
		ft_print_base(nbr_base, base, nb_cara);
}
