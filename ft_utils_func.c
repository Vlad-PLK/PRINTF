/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:05:45 by vpolojie          #+#    #+#             */
/*   Updated: 2022/11/23 11:51:04 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}

void	ft_putnbr_fd(int nbr, int fd, size_t *nb_cara)
{
	if (nbr == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(21474, fd, nb_cara);
		ft_putnbr_fd(83648, fd, nb_cara);
		(*nb_cara)++;
	}
	else if (0 <= nbr && nbr <= 9)
	{
		ft_putchar_fd(nbr + '0', fd);
		(*nb_cara)++;
	}
	else if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((nbr * -1), fd, nb_cara);
		(*nb_cara)++;
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd, nb_cara);
		ft_putnbr_fd(nbr % 10, fd, nb_cara);
	}
}

void	ft_print_base(unsigned int nbr, char *base, size_t *nb_cara)
{
	if (nbr < 0)
	{
		nbr = (unsigned int)nbr;
		ft_print_base(nbr, base, nb_cara);
	}
	if (nbr >= (unsigned int)ft_strlen(base))
		ft_print_base(nbr / ft_strlen(base), base, nb_cara);
	write(1, &base[nbr % ft_strlen(base)], 1);
	(*nb_cara)++;
}
