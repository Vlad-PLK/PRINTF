/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:14:44 by vpolojie          #+#    #+#             */
/*   Updated: 2022/03/23 17:59:46 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isascii(int c)
{
	if ((0 <= c && c <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
