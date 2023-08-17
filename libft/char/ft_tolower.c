/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:19:18 by vpolojie          #+#    #+#             */
/*   Updated: 2023/08/15 17:11:26 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_tolower -> transform c into a lowercase character if it's a letter
*/

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
	{
		return (c);
	}
}
