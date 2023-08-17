/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:26:16 by vpolojie          #+#    #+#             */
/*   Updated: 2023/08/15 20:36:58 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	write 'c' in the desired file descriptor
	NOTE : 0 -> STDOUT 1 -> STDIN 2 -> STDERR
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
