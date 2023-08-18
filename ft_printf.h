/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:07:30 by vpolojie          #+#    #+#             */
/*   Updated: 2023/08/18 08:53:27 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd2(int nbr, int fd, size_t *nb_cara);
void	ft_print_base(unsigned int nbr, char *base, size_t *nb_cara);
void	ft_char_type(va_list list_arg, size_t *nb_cara);
void	ft_str_type(va_list list_arg, size_t *nb_cara);
void	ft_int_type(va_list list_arg, size_t *nb_cara);
void	ft_unsigned_int_type(va_list list_arg, size_t *nb_cara);
void	ft_base_type(va_list list_arg, size_t *nb_cara, char *base);
void	ft_put_unsigned_nbr_fd(unsigned int nbr, int fd, size_t *nb_cara);

#endif
