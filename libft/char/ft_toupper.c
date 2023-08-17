/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:18:03 by vpolojie          #+#    #+#             */
/*   Updated: 2023/08/15 17:14:02 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_toupper -> if c is lowercase transform to a uppercase
*/

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
	{
		return (c);
	}
}
