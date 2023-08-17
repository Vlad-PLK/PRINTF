/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:04:48 by vpolojie          #+#    #+#             */
/*   Updated: 2023/08/15 17:09:16 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
	ft_isalnum -> checks if c is a letter or a digit
*/

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}	

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1 || ft_isdigit(c) == 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
