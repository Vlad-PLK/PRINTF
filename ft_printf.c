/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:39:39 by vpolojie          #+#    #+#             */
/*   Updated: 2022/11/23 12:15:40 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned_nbr_fd(unsigned int nbr, int fd, size_t *nb_cara)
{
	if (0 <= nbr && nbr <= 9)
	{
		ft_putchar_fd(nbr + '0', fd);
		(*nb_cara)++;
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd, nb_cara);
		ft_putnbr_fd(nbr % 10, fd, nb_cara);
	}
}

void	ft_print_base_ul(unsigned long nbr, char *base, size_t *nb_cara)
{
	if (nbr < 0)
	{
		nbr = (unsigned int)nbr;
		ft_print_base_ul(nbr, base, nb_cara);
	}
	if (nbr >= 16)
		ft_print_base_ul(nbr / 16, base, nb_cara);
	write(1, &base[nbr % 16], 1);
	(*nb_cara)++;
}

void	ft_addr_type(va_list list_arg, size_t *nb_cara)
{
	unsigned long	ptr_addr;

	ptr_addr = (unsigned long)va_arg(list_arg, unsigned long);
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	(*nb_cara) += 2;
	ft_print_base_ul(ptr_addr, "0123456789abcdef", nb_cara);
}

size_t	ft_check_type(char type, va_list list_arg, size_t nb_cara)
{
	if (type == 'c')
		ft_char_type(list_arg, &nb_cara);
	else if (type == 's')
		ft_str_type(list_arg, &nb_cara);
	else if (type == 'p')
		ft_addr_type(list_arg, &nb_cara);
	else if (type == 'd' || type == 'i')
		ft_int_type(list_arg, &nb_cara);
	else if (type == 'u')
		ft_unsigned_int_type(list_arg, &nb_cara);
	else if (type == 'x')
		ft_base_type(list_arg, &nb_cara, "0123456789abcdef");
	else if (type == 'X')
		ft_base_type(list_arg, &nb_cara, "0123456789ABCDEF");
	else if (type == '%')
	{
		ft_putchar_fd('%', 1);
		nb_cara++;
	}
	return (nb_cara);
}

int	ft_printf(const char *format, ...)
{
	va_list	list_arg;
	int		i;
	size_t	nb_cara;

	va_start(list_arg, format);
	i = 0;
	nb_cara = 0;
	while (format[i] != '\0')
	{
		nb_cara++;
		if (!(format[i] == '%'))
			ft_putchar_fd(format[i], 1);
		else
		{
			i++;
			nb_cara--;
			nb_cara = ft_check_type(format[i], list_arg, nb_cara);
		}
		i++;
	}
	return (nb_cara);
}

